/* POV Display with Arduino Nano
   No Hall Sensor Version – 200 RPM motor
   Created for visual patterns and simple text
*/

const int pins[] = {11, 10, 9, 8, 7, 6, 5, 4}; // LED pins (8 LEDs)
const int rows = 8;
const int charWidth = 5;
const int charHeight = 8;

// Simple 5x8 font (add more if needed)
const unsigned char font[95][5] = {
  {0x00,0x00,0x00,0x00,0x00}, // space
  {0x00,0x00,0x6f,0x00,0x00}, // !
  {0x7e,0x09,0x09,0x09,0x7e}, // A
  {0x7f,0x49,0x49,0x49,0x36}, // B
  {0x3e,0x41,0x41,0x41,0x22}, // C
  {0x7f,0x41,0x41,0x22,0x1c}, // D
  {0x7f,0x49,0x49,0x49,0x41}, // E
  {0x3e,0x41,0x41,0x41,0x3e}, // O
  {0x7f,0x09,0x09,0x09,0x06}, // P
  {0x7f,0x08,0x08,0x08,0x7f}, // H
  {0x3c,0x42,0x42,0x42,0x3c}, // O
  {0x00,0x00,0x00,0x00,0x00}, // space
};

char textString[] = "HI";  // pattern or text
int motorRPM = 200;        // set your motor speed here (200 RPM)

void setup() {
  for (int i = 0; i < rows; i++) {
    pinMode(pins[i], OUTPUT);
    digitalWrite(pins[i], LOW);
  }
}

// Calculate delay based on motor speed and text length
int getColumnDelay(int totalColumnsPerRotation) {
  float rotationTimeMs = 60000.0 / motorRPM; // 1 rotation time in ms
  return rotationTimeMs / totalColumnsPerRotation;
}

void loop() {
  int totalColumns = strlen(textString) * (charWidth + 1); // +1 for spacing
  int columnDelay = getColumnDelay(totalColumns);

  // Continuously display text assuming constant rotation speed
  for (int k = 0; k < strlen(textString); k++) {
    displayChar(textString[k], columnDelay);
  }
}

// Display one character column by column
void displayChar(char ch, int columnDelay) {
  if (ch < 32 || ch > 126) ch = 32;
  ch -= 32;

  for (int i = 0; i < charWidth; i++) {
    byte b = font[ch][i];
    for (int j = 0; j < charHeight; j++) {
      digitalWrite(pins[j], bitRead(b, j));
    }
    delay(columnDelay);
  }

  // small gap between characters
  for (int i = 0; i < rows; i++) digitalWrite(pins[i], LOW);
  delay(columnDelay);
}

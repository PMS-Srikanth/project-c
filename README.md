# project-c
# 🌀 Propeller Display (C Project)

## 📖 Overview
This project is a **Propeller Display** built using **C programming** and an **Arduino Nano**.  
A propeller display (also known as a **Persistence of Vision Display**) creates the illusion of text or images floating in the air by rapidly rotating LEDs and controlling their ON/OFF timing.

---

## ⚙️ Components Used
| Component | Quantity |
|------------|-----------|
| Arduino Nano | 1 |
| Dot Board | 1 |
| LEDs | 15 |
| Resistors (220Ω) | 10 |
| Female Header Pins | 2 |
| Jumper Wires | 15 |
| 1000 RPM Motor *(if available)* | 1 |

---

## 💡 Working Principle
The project works on the concept of **Persistence of Vision (POV)** — where the human eye perceives a continuous image from rapidly flashing lights.

- The **Arduino Nano** controls when each LED turns ON or OFF.
- The LED assembly is attached to a **rotating motor shaft**.
- As it spins, the timed LED patterns form **visible letters or designs** in mid-air.
- The program written in **C** controls the LED sequence and timing.

---

## 🧠 Software Details
- **Language:** C (Arduino-compatible)
- **Platform:** Arduino IDE
- **Microcontroller:** ATmega328P (Arduino Nano)
- **Libraries Used:** None (uses standard I/O functions)

---

## 🔧 Setup Instructions
1. Assemble the components on a **dot board** as per the circuit diagram.
2. Connect LEDs to Arduino digital pins via 220Ω resistors.
3. Mount the motor and balance the rotating arm properly.
4. Upload the C code to the Arduino Nano using **Arduino IDE**.
5. Power the circuit and observe the display pattern while it rotates.

---

## 🚀 Features
- Simple and low-cost **POV display**.
- Displays **text or symbols** using rotating LEDs.
- Built using basic **C programming** and electronics.


---

## 👨‍💻 Author
**P. Srikanth**

**Yash Narayan**

**Eswar Balaji**  
Project Developer & Programmer  

---

## 📜 License
This project is released under the **MIT License**.  
You are free to use, modify, and distribute it with attribution.

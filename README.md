# demo_UART_COMMUNICATION

**Project Title**: Full-Duplex UART Communication Between STM32F401CCU6 (Black Pill) and Arduino Mega

## 📘 Overview

This project demonstrates how to set up **full-duplex UART communication** between an **STM32F401CCU6 (Black Pill)** and an **Arduino Mega** using UART2 on the STM32. The communication allows bidirectional data flow using asynchronous serial transmission.

---

## 🔌 Hardware Used

- STM32F401CCU6 (Black Pill)
- Arduino Mega 2560
- ST-Link V2 (for programming and debugging STM32)
- Jumper wires
- USB to UART converter (optional for debugging)

---

## 🛠️ Pin Configuration

### STM32F401CCU6 (Black Pill)

| Function         | Pin Name | GPIO Pin |
|------------------|----------|----------|
| UART2 TX         | PA2      | D1       |
| UART2 RX         | PA3      | D0       |
| GND              | GND      | GND      |
| 3.3V Power       | 3.3V     | 3.3V     |

### Arduino Mega

| Function         | Pin Name |
|------------------|----------|
| RX1              | Pin 19   |
| TX1              | Pin 18   |
| GND              | GND      |
| 5V Power         | 5V       |

> ⚠️ Note: Level shifting may be required since Arduino Mega operates at 5V and STM32 at 3.3V. Use a voltage divider or logic level shifter on the Arduino TX → STM32 RX line.

---

## 🔄 Wiring Diagram

| STM32 PA2 (TX) → Arduino RX1 (Pin 19) |
| STM32 PA3 (RX) ← Arduino TX1 (Pin 18) |
| STM32 GND ↔ Arduino GND              |

---

## 🔧 ST-Link Connection (for STM32 programming)

| ST-Link Pin | STM32 Pin |
|-------------|-----------|
| SWDIO       | PA13      |
| SWCLK       | PA14      |
| GND         | GND       |
| 3.3V        | 3.3V      |

- ST-Link is used to flash and debug the STM32 via **STM32CubeIDE**.
- Make sure the jumper settings on Black Pill allow BOOT0 = 0 for flash booting.

---

## 📤 Communication Flow

1. STM32 sends a command (e.g., `0xB`) over UART2.
2. Arduino Mega receives the command, processes it, and sends back a response.
3. STM32 receives and prints/logs the response.
4. Both devices run in non-blocking mode using UART interrupts or polling.

---

## 🧪 Tools Used

- STM32CubeIDE for STM32 firmware development.
- Arduino IDE for Arduino sketch development.
- Logic Analyzer / Serial Monitor for debugging.

---

## ✅ Features

- Full-duplex data exchange
- Configurable baud rate (default: 115200)
- Interrupt-driven UART communication on STM32
- Simple serial protocol for command-response structure

---

## 📷 Demo/Output

> _[Include any screenshots or serial output logs here if available]_  
> _You may also include a wiring photo for visual clarity._

---

## 📚 Future Enhancements

- Add CRC validation for data integrity.
- Implement a command parser.
- Expand to multiple UART devices or integrate sensors.

---

## 🧑‍💻 Author

**Kowshik-28**

Feel free to explore the code and suggest improvements.  
🔗 [[LinkedIn](https://www.linkedin.com/](https://www.linkedin.com/in/kowshik-kancharla-596794204/)) | [GitHub](https://github.com/Kowshik-28)

---


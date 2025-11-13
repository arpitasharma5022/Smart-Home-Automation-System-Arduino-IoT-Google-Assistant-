# 🏠 Smart Home Automation System (Arduino + IoT + Google Assistant)

A modern **IoT-based home automation system** that lets you control electrical appliances via:
- Smartphone (Blynk IoT App)
- Voice commands using **Google Assistant**
- Real-time temperature and humidity monitoring

---

## ⚙️ Features

- 📱 Smartphone app control via **Blynk IoT**
- 🗣️ Voice control through **Google Assistant + IFTTT**
- 🌡️ Live temperature & humidity updates
- ⚡ Real-time feedback and cloud sync
- 💡 Energy-efficient and easy to expand

---

## 🧰 Components Used

| Component | Quantity | Description |
|------------|-----------|-------------|
| NodeMCU ESP8266 | 1 | Wi-Fi enabled microcontroller |
| Relay Module (4-channel) | 1 | To switch appliances |
| DHT11 Sensor | 1 | For temperature & humidity |
| Blynk IoT Cloud | – | Mobile & web control |
| Google Assistant | – | Voice automation |
| IFTTT | – | API bridge between Google & Blynk |

---

## 🧠 System Architecture

**Google Assistant → IFTTT → Blynk Cloud → NodeMCU → Relay → Appliances**

Sensor data (DHT11) → NodeMCU → Blynk Cloud → App Display

---

## 🧩 Libraries Required

- `ESP8266WiFi.h`
- `BlynkSimpleEsp8266.h`
- `DHT.h`

---

## 🪄 How to Use

1. Connect NodeMCU with relays & sensors as per circuit.
2. Flash the Arduino code with your Wi-Fi & Blynk credentials.
3. Configure Blynk dashboard (buttons & data displays).
4. Create Google Assistant applets on IFTTT.
5. Say “Hey Google, turn on the fan!” → and it works 😄

---

## 📘 Applications

- Smart homes and offices  
- IoT research and training projects  
- Energy-efficient automation systems  

---

## 👩‍💻 Author

**Arpita Sharma**  
🎓 Electronics and Communication Engineering – JNGEC Sundarnagar  
📧 [arpitasharma5022@gmail.com](mailto:arpitasharma5022@gmail.com)  
🔗 [LinkedIn](https://www.linkedin.com/in/arpita-sharma-686044358/)

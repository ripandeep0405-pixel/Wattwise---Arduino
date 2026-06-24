# WattWise – Smart Energy Management System

## Project Overview

WattWise is an Arduino-based smart energy-saving system designed to reduce unnecessary electricity consumption through automation. The project uses a Real-Time Clock (RTC) to automatically turn a light (LED) and a DC fan off at scheduled times, helping users save energy without requiring manual intervention.

To make the project both functional and visually appealing, all components were integrated into a custom key-hanger enclosure created specifically for project presentation. This demonstrates how smart technology can be incorporated into everyday household items.

The system also calculates and displays estimated energy savings on an LCD screen, helping users understand the impact of reducing unnecessary power usage.

---

## Features

* Automatic light shutoff based on scheduled time
* Automatic fan shutoff based on scheduled time
* Real-Time Clock (RTC) scheduling system
* LCD display showing system status
* Displays estimated energy saved (Wh)
* Custom key-hanger enclosure design
* Fully automated operation
* Energy conservation awareness

---

## Components Used

* Arduino Uno
* DS1307 Real-Time Clock (RTC) Module
* LCD 1602 Display
* 10kΩ Potentiometer (LCD contrast control)
* PN2222 NPN Transistor (fan control)
* DC Fan
* LED
* Resistors
* Diode
* Breadboard
* Jumper Wires
* USB Power Supply

---

## How It Works

1. The DS1307 RTC continuously tracks the current time.
2. The Arduino compares the current time with the programmed schedule.
3. When the scheduled shutoff time is reached:

   * The LED turns OFF automatically.
   * The DC fan turns OFF automatically.
4. The LCD updates the system status and displays estimated energy savings.
5. Users can view how much energy has been saved through automation.

---

## Challenges Faced

* LCD display configuration and contrast adjustment
* RTC module integration and time synchronization
* Fan control using a transistor circuit
* Power stability and circuit troubleshooting
* Energy savings calculations and LCD formatting

---

## Custom 3D Printed Enclosure

To improve the functionality and presentation of WattWise, a custom key-hanger enclosure was designed and manufactured using 3D printing technology. The enclosure was modeled using SolidWorks and Autodesk Fusion 360 before being 3D printed and assembled with the electronic components.

The design was created to securely house the Arduino Uno, RTC module, LCD display, wiring, LED, and DC fan while maintaining a clean and professional appearance. This allowed the project to combine embedded systems, electronics, and mechanical design into a single product prototype.

### Design Tools Used

* SolidWorks
* Autodesk Fusion 360
* 3D Printing Technology

### Skills Demonstrated

* CAD Modeling
* 3D Design
* 3D Printing
* Product Prototyping
* Embedded Systems
* Electronics Integration
* Arduino Programming


## Skills Gained

* Arduino Programming
* Embedded Systems Development
* Circuit Design
* Electronics Troubleshooting
* Hardware Integration
* Problem Solving
* Project Documentation
* Energy Efficiency Concepts

---

## Technologies Used

* Arduino C++
* Embedded Systems
* Electronics
* Hardware Prototyping
* Real-Time Clock Integration

---

## Team Members

* Ripandeep Kaur
* Isel Guardado

---

## Future Improvements

* Mobile app integration
* IoT connectivity for remote monitoring
* Multiple appliance control
* Energy usage history tracking
* Wi-Fi and cloud data logging

---

## Project Goal

The goal of WattWise is to demonstrate how simple, low-cost embedded systems can help reduce wasted electricity through automation while increasing awareness of energy conservation. This project combines hardware and software to create a practical solution that can be applied in homes, schools, and workplaces.

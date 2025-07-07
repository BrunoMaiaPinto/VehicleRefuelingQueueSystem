# ⛽ Vehicle Refueling Queue System (C++)

This is a simple command-line C++ program that simulates a vehicle refueling management system using queues and vectors. The application allows vehicles to enter a waiting line, be refueled in order, and stores a history of all vehicles that were served.

## 📋 Features

- Register incoming vehicles (license plate only).
- Refuel the next vehicle in line.
- Display all previously refueled vehicles with fuel quantity and total amount paid.
- Interactive menu system in the terminal.

## 🧠 Concepts Used

- **Structures (`struct`)**: Defines a custom data type `Viatura` (vehicle) to hold relevant information.
- **Queue (`std::queue`)**: First-In-First-Out structure to manage vehicles waiting to be refueled.
- **Vector (`std::vector`)**: Stores the history of refueled vehicles.
- **Conditionals (`if`, `else if`, `else`)**: Handles menu selection and program flow.
- **Loop (`for`)**: Iterates over the refueled vehicles list to display history.
- **Logical Operator `!`**: Used to check if the queue is empty.
- **System Commands (`system("cls")`, `system("pause")`)**: Used for screen clearing and pausing (Windows only).

## 🚀 How It Works

1. The user is presented with a menu:
   - `1`: Add a vehicle to the queue.
   - `2`: View all vehicles that have already been refueled.
   - `3`: Refuel the next vehicle in the queue.
   - `0`: Exit the program.

2. When refueling, the user inputs how many liters to pump. The price is calculated using a fixed rate of **€1.78 per liter**.

3. Refueled vehicles are removed from the queue and stored in the history vector.

## 🖥️ Requirements

- C++ compiler (e.g., g++, MSVC)
- Windows OS (for `system("cls")` and `system("pause")`)
- Terminal/Command Prompt

## 🔧 Compilation

Use a C++ compiler to compile the program:

```bash
g++ -o refueling_system main.cpp
./refueling_system

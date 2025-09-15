# Periodic Table Lookup in C

A simple C program that allows users to input the name or symbol of a chemical element and displays its properties such as atomic number, group, period, and atomic mass.

---

## 🔍 Features

- Contains data for all **118** elements from the periodic table.
- Accepts **element name** or **chemical symbol** (case-insensitive).
- Displays:
  - Name
  - Symbol
  - Atomic Number
  - Group
  - Period
  - Atomic Mass

---

## 🛠️ How It Works

The program stores element data in a static array of `struct Element`.
It then takes user input, converts it to lowercase, and searches for a match by name or symbol.
If found, it prints the element's properties; otherwise, it displays an error message.

---

## 🚀 Getting Started

### Requirements

- A C compiler (e.g., GCC)

# Simple Banking System (C++)

A robust console-based banking application developed in **C++**. This project demonstrates the practical application of **Object-Oriented Programming (OOP)** concepts to manage basic financial transactions.

## 🚀 Features
* **Account Management:** Initialize accounts with holder name, ID, and balance.
* **Smart Deposits:** Add funds to the account with immediate balance updates.
* **Secure Withdrawals:** Integrated logic to verify funds before processing any withdrawal.
* **Professional UI:** Clean, formatted console output using `iomanip` for currency precision.

## 🛠 Programming Concepts Used
* **Encapsulation:** Used `private` access modifiers to secure sensitive account data, exposing functionality only through `public` methods.
* **Object-Oriented Design:** Implementation of the `BankAccount` class to bundle data and methods together.
* **Formatted I/O:** Used `fixed` and `setprecision(2)` to ensure financial data is displayed in a standard currency format.

## 📋 How to Run the Project
1. Clone the repository or download the `main.cpp` file.
2. Open the file in any C++ IDE (Visual Studio, Code::Blocks) or use a CLI compiler.
3. Compile the code:
   ```bash
   g++ main.cpp -o BankingSystem

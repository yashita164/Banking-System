# Banking System using Hash Table and Linked List

## Project Overview

This project is a menu-driven Banking Management System implemented in the C programming language using fundamental Data Structures concepts such as **Hash Tables** and **Singly Linked Lists**.

The system is designed to efficiently manage customer accounts and perform core banking operations such as account creation, deposits, withdrawals, transfers, account searching, and displaying all accounts.

The project demonstrates the practical implementation of hashing techniques for fast data retrieval and linked list chaining for collision handling.

---

# Objectives

- To implement a banking system using Hash Tables and Linked Lists.
- To achieve efficient account storage and fast account lookup.
- To demonstrate collision handling using separate chaining.
- To apply Data Structures concepts in a real-world application.
- To develop a modular multi-file project in C.

---

# Technologies Used

| Technology | Purpose |
|------------|---------|
| C Programming | Core implementation |
| Hash Table | Fast account lookup |
| Singly Linked List | Collision handling |
| GCC Compiler | Compilation |
| VS Code / CodeBlocks | Development Environment |
| Git & GitHub | Version control and project hosting |

---

# Data Structures Used

## 1. Hash Table

A Hash Table is used to store accounts efficiently using account numbers as keys.

### Hash Function

```c
index = accountNumber % TABLE_SIZE;
```

### Advantages

- Fast lookup (O(1) average case)
- Efficient insertion and retrieval
- Reduces search complexity

---

## 2. Singly Linked List

Each bucket of the hash table contains a linked list to handle collisions using **Separate Chaining**.

### Advantages

- Dynamic memory allocation
- Efficient insertion
- Handles multiple accounts at same hash index

---

# Features

- Create New Account
- Deposit Money
- Withdraw Money
- Transfer Funds
- Search Account
- Display All Accounts
- Collision Handling using Linked List
- Modular Multi-file Structure

---

# Project Structure

```text
Banking-System/
│
├── banking.h      # Header file with structures & declarations
├── banking.c      # Function implementations
├── main.c         # Main driver program
└── README.md      # Project documentation
```

---

# Detailed Working

## 1. Creating an Account

- User enters account number, name, and initial balance.
- Hash function computes the bucket index.
- A new account node is dynamically created.
- The node is inserted into the linked list at that bucket.

---

## 2. Account Search

- User provides account number.
- Hash function computes index.
- Linked list at that index is traversed.
- Matching account is returned if found.

---

## 3. Deposit Operation

- Account is searched using hash lookup.
- Deposit amount is added to current balance.
- Updated balance is displayed.

---

## 4. Withdraw Operation

- System checks account validity.
- Verifies sufficient balance.
- Deducts amount safely.
- Prevents negative balance.

---

## 5. Transfer Operation

- Sender and receiver accounts are searched.
- Amount is withdrawn from sender.
- Same amount is deposited into receiver.
- Ensures secure fund transfer.

---

## 6. Display All Accounts

- Entire hash table is traversed.
- All linked lists are printed sequentially.
- Displays complete banking records.

---

# Functions Used

| Function | Description |
|----------|-------------|
| `initTable()` | Initializes hash table |
| `hashFunction()` | Computes hash index |
| `addAccount()` | Creates new account |
| `searchAccount()` | Searches account using hash table |
| `deposit()` | Adds balance |
| `withdraw()` | Deducts balance |
| `transfer()` | Transfers money between accounts |
| `displayAll()` | Displays all accounts |

---

# How to Run the Project

## Step 1: Compile the Program

```bash
gcc main.c banking.c -o banking
```

---

## Step 2: Run the Executable

### Windows

```bash
banking.exe
```

### Linux / Mac

```bash
./banking
```

---

# Sample Menu

```text
===== BANKING SYSTEM =====

1. Add Account
2. Deposit
3. Withdraw
4. Transfer
5. Search Account
6. Display All Accounts
7. Exit
```

---

# 📊 Applications

- Banking systems
- Financial management systems
- User account databases
- Wallet management systems
- Fast data retrieval systems

---

# Advantages

- Fast searching using hashing
- Efficient collision handling
- Dynamic memory usage
- Modular and scalable design
- Easy to extend with new features

---

# Limitations

- Performance may reduce with excessive collisions
- Requires good hash function design
- Memory usage increases with more accounts

---

# Future Enhancements

- GUI-based banking interface
- File handling for permanent data storage
- Password authentication
- Admin and customer login system
- Transaction history
- Online banking simulation

---

# Concepts Demonstrated

- Hash Tables
- Separate Chaining
- Linked Lists
- Dynamic Memory Allocation
- Structs and Pointers
- Modular Multi-file Programming

---

# Conclusion

This project successfully demonstrates the implementation of a Banking Management System using Hash Tables and Linked Lists in C. The system efficiently performs banking operations while showcasing important Data Structures concepts such as hashing, linked list traversal, collision handling, dynamic memory allocation, and modular programming.

The project provides practical understanding of how real-world systems manage large volumes of data efficiently using optimized data structures.

---


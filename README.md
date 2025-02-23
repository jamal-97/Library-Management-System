# Library Management System

A comprehensive library management system implemented in C using various data structures.

## Data Structures Used
- Linked Lists: For managing book records and user records
- Queue: For managing book reservations
- Stack: For maintaining transaction history
- Binary Search Tree: For efficient book searching
- Hash Table: For quick user lookup

## Features
1. Book Management
   - Add new books
   - Remove books
   - Search books
   - Update book details

2. User Management
   - Add new users
   - Remove users
   - Update user information

3. Transaction Management
   - Issue books
   - Return books
   - Reserve books
   - View transaction history

## Files Structure
- `main.c`: Main program file
- `book.h`: Book structure and functions declarations
- `book.c`: Book functions implementation
- `user.h`: User structure and functions declarations
- `user.c`: User functions implementation
- `transaction.h`: Transaction structure and functions declarations
- `transaction.c`: Transaction functions implementation
- `data_structures.h`: Custom data structure implementations

## How to Compile and Run
```bash
gcc -o library main.c book.c user.c transaction.c
./library
```

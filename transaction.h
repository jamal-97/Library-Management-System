#ifndef TRANSACTION_H
#define TRANSACTION_H

#include "data_structures.h"
#include "book.h"
#include "user.h"

typedef enum {
    ISSUE,
    RETURN,
    RESERVE
} TransactionType;

typedef struct {
    int id;
    int userId;
    int bookId;
    TransactionType type;
    char date[20];
} Transaction;

// Transaction management functions
void issueBook(Stack* transactionStack, User* user, Book* book);
void returnBook(Stack* transactionStack, User* user, Book* book);
void reserveBook(Queue* reservationQueue, User* user, Book* book);
void displayTransaction(Transaction* transaction);
void displayTransactionHistory(Stack* transactionStack);

// Helper functions
int generateTransactionId();
void getCurrentDate(char* date);

#endif

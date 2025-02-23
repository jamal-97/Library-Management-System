#ifndef BOOK_H
#define BOOK_H

#include "data_structures.h"

typedef struct {
    int id;
    char title[100];
    char author[50];
    char isbn[20];
    int quantity;
    int available;
} Book;

// Book management functions
void addBook(BSTNode** bookTree, HashTable* bookHash);
void removeBook(BSTNode** bookTree, HashTable* bookHash, int bookId);
Book* searchBook(BSTNode* bookTree, int bookId);
void updateBook(BSTNode* bookTree, HashTable* bookHash, int bookId);
void displayBook(Book* book);
void displayAllBooks(BSTNode* root);

// Helper functions
int generateBookId();
int calculateBookHash(int bookId);

#endif

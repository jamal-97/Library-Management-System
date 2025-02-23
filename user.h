#ifndef USER_H
#define USER_H

#include "data_structures.h"

typedef struct {
    int id;
    char name[50];
    char email[50];
    char phone[15];
    int booksIssued;
} User;

// User management functions
void addUser(Node** userList, HashTable* userHash);
void removeUser(Node** userList, HashTable* userHash, int userId);
User* searchUser(HashTable* userHash, int userId);
void updateUser(Node* userList, HashTable* userHash, int userId);
void displayUser(User* user);
void displayAllUsers(Node* userList);

// Helper functions
int generateUserId();
int calculateUserHash(int userId);

#endif

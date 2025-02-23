#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "data_structures.h"
#include "book.h"
#include "user.h"
#include "transaction.h"

void displayMenu() {
    printf("\n=== Library Management System ===\n");
    printf("1. Add Book\n");
    printf("2. Remove Book\n");
    printf("3. Search Book\n");
    printf("4. Display All Books\n");
    printf("5. Add User\n");
    printf("6. Remove User\n");
    printf("7. Search User\n");
    printf("8. Display All Users\n");
    printf("9. Issue Book\n");
    printf("10. Return Book\n");
    printf("11. Reserve Book\n");
    printf("12. View Transaction History\n");
    printf("0. Exit\n");
    printf("Enter your choice: ");
}

int main() {
    // Initialize data structures
    BSTNode* bookTree = NULL;
    HashTable* bookHash = createHashTable();
    Node* userList = NULL;
    HashTable* userHash = createHashTable();
    Stack* transactionStack = createStack();
    Queue* reservationQueue = createQueue();
    
    int choice;
    int bookId, userId;
    Book* book;
    User* user;
    
    do {
        displayMenu();
        scanf("%d", &choice);
        
        switch(choice) {
            case 1:
                addBook(&bookTree, bookHash);
                break;
            case 2:
                printf("Enter Book ID to remove: ");
                scanf("%d", &bookId);
                removeBook(&bookTree, bookHash, bookId);
                break;
            case 3:
                printf("Enter Book ID to search: ");
                scanf("%d", &bookId);
                book = searchBook(bookTree, bookId);
                if (book) displayBook(book);
                break;
            case 4:
                displayAllBooks(bookTree);
                break;
            case 5:
                addUser(&userList, userHash);
                break;
            case 6:
                printf("Enter User ID to remove: ");
                scanf("%d", &userId);
                removeUser(&userList, userHash, userId);
                break;
            case 7:
                printf("Enter User ID to search: ");
                scanf("%d", &userId);
                user = searchUser(userHash, userId);
                if (user) displayUser(user);
                break;
            case 8:
                displayAllUsers(userList);
                break;
            case 9:
                printf("Enter User ID: ");
                scanf("%d", &userId);
                printf("Enter Book ID: ");
                scanf("%d", &bookId);
                user = searchUser(userHash, userId);
                book = searchBook(bookTree, bookId);
                if (user && book) {
                    issueBook(transactionStack, user, book);
                }
                break;
            case 10:
                printf("Enter User ID: ");
                scanf("%d", &userId);
                printf("Enter Book ID: ");
                scanf("%d", &bookId);
                user = searchUser(userHash, userId);
                book = searchBook(bookTree, bookId);
                if (user && book) {
                    returnBook(transactionStack, user, book);
                }
                break;
            case 11:
                printf("Enter User ID: ");
                scanf("%d", &userId);
                printf("Enter Book ID: ");
                scanf("%d", &bookId);
                user = searchUser(userHash, userId);
                book = searchBook(bookTree, bookId);
                if (user && book) {
                    reserveBook(reservationQueue, user, book);
                }
                break;
            case 12:
                displayTransactionHistory(transactionStack);
                break;
            case 0:
                printf("Thank you for using Library Management System!\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 0);
    
    // Free allocated memory (implementation needed)
    return 0;
}

#ifndef DATA_STRUCTURES_H
#define DATA_STRUCTURES_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Node structure for Linked List
typedef struct Node {
    void* data;
    struct Node* next;
} Node;

// Queue structure
typedef struct Queue {
    Node* front;
    Node* rear;
} Queue;

// Stack structure
typedef struct Stack {
    Node* top;
} Stack;

// Binary Search Tree Node
typedef struct BSTNode {
    void* data;
    struct BSTNode* left;
    struct BSTNode* right;
} BSTNode;

// Hash Table structure
#define HASH_SIZE 100
typedef struct HashTable {
    Node* table[HASH_SIZE];
} HashTable;

// Function declarations for Linked List
Node* createNode(void* data);
void insertNode(Node** head, void* data);
void deleteNode(Node** head, void* data);
Node* searchNode(Node* head, void* data);

// Function declarations for Queue
Queue* createQueue();
void enqueue(Queue* q, void* data);
void* dequeue(Queue* q);
int isQueueEmpty(Queue* q);

// Function declarations for Stack
Stack* createStack();
void push(Stack* s, void* data);
void* pop(Stack* s);
int isStackEmpty(Stack* s);

// Function declarations for BST
BSTNode* createBSTNode(void* data);
BSTNode* insertBST(BSTNode* root, void* data);
BSTNode* searchBST(BSTNode* root, void* data);
BSTNode* deleteBST(BSTNode* root, void* data);

// Function declarations for Hash Table
HashTable* createHashTable();
void insertHash(HashTable* ht, void* data, int key);
void* searchHash(HashTable* ht, int key);
void deleteHash(HashTable* ht, int key);

#endif

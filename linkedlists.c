#include <stdio.h>
#include <stdlib.h>

//Singly Linked List
struct Node
{
    int data;
    struct Node* next;
};
struct Node* createNode(int value){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

//Doubly Linked List
struct Node{
    int data;
    struct Node* next;
    struct Node* prev;
};
struct Node* createNode(int value){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    newNode->prev = NULL;
    return newNode;
}

//Circular Linked List
struct Node{
    int data;
    struct Node* next;
};
struct Node* createNode(int value){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = newNode;
    return newNode;
}

//not for execution, only for revision for my exam lol
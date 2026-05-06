#include <stdio.h>

#define size 5
int queue[size];
int front = -1; int rear = -1;

void enqueue(){
    int x;
    if(rear == size - 1){
        printf("\nQueue overflow");
    }
    else{
        printf("\nEnter a value to add: ");
        scanf("%d", &x);
        printf("\nEnqueued %d to the queue", x);
        if(front == -1){
            front = rear = 0;
        }
        else {
            rear++;
        }
        queue[rear] = x;
    }
}
void dequeue(){
    if(front == -1 && rear == -1){
        printf("\nQueue underflow");
    }
    else{
        printf("\nDequeued %d from the queue", queue[front]);
        front++;
    }
}
void display(){
    if(front == -1 && rear == -1){
        printf("\nQueue empty");
    }
    else {
        printf("\nThe elements are: ");
        for(int i = front; i <= rear; i++){
            printf("\n %d", queue[i]);
        }
    }
}
void main(){
    int choice;
    while(1){
        printf("\n 1. Enqueue");
        printf("\n 2. Dequeue");
        printf("\n 3. Display");
        printf("\n 4. Exit");
        printf("\nEnter a choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            enqueue();
            break;
        
        case 2:
            dequeue();
            break;
        
        case 3:
            display();
            break;
        
        case 4:
            return;
        default:

            break;
        }
    }
}


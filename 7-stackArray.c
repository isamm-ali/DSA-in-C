#include <stdio.h>

#define N 5
int top = -1;
int stack[100];

void push(){
    int x;
    if(top >= N-1){
        printf("\nStack Overflow");
    }
    else{
        printf("\nEnter a value to add: ");
        scanf("%d", &x);
        printf("\nPushed %d to the stack", x);
        top++;
        stack[top] = x;
    }
}
void pop(){
    if(top == -1){
        printf("\nStack Underflow");
    }
    else{
        printf("\nPopped %d from the stack", stack[top]);
        top--;
    }
}
void display(){
    if(top == -1){
        printf("\nStack is empty");
    }
    else {
        printf("\nThe elements are: ");
        for(int i = top; i >= 0; i--){
            printf("\n %d", stack[i]);
        }
    }
}
void main(){
    int choice;
    while(1){
        printf("\n 1. Push");
        printf("\n 2. Pop");
        printf("\n 3. Display");
        printf("\n 4. Exit");
        printf("\nEnter a choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            push();
            break;
        
        case 2:
            pop();
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

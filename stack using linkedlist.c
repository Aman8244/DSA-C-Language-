// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>
struct stack{
    int data;
    struct stack *next;
}*top,*newnode,*temp;
void push(int x){
    newnode= (struct stack*)malloc(sizeof(struct stack));
    if(top == NULL){
        top = newnode;
        newnode->data = x;
        newnode->next = NULL;
    }
    else{
        newnode->data = x;
        newnode->next = top;
        top=newnode;
        
    }
}
void pop(){
    temp = top;
    top=top->next;
    free(temp);
}
void display(){
    temp=top;
    while(temp != NULL){
        
        printf("%d\n",temp->data);
        temp=temp->next;
        
    }
}

int main() {
    // Write C code here
    push(5);
    push(8);
    push(7);
    push(16);
    display();
    pop();
    pop();
    display();
    
    return 0;
}
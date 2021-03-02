#include<stdio.h>
#include<stdlib.h>

struct stack
{
    int data;
    struct stack* prev;
};

struct stack* push(struct stack* n,int data)
{   
    struct stack* new;
    new = (struct stack*)malloc(sizeof(struct stack));
    new->data= data;
    new->prev= n;
    return new; 
};

int peek(struct stack* n){
    printf("%d",n->data);
    return 0;
}

struct stack* pop(struct stack* n){
    struct stack* a = n->prev;
    n = a;
    return n;
}

int main() {
    
    struct stack* a;
    a = (struct stack*)malloc(sizeof(struct stack));
    a->data = 1;
    
    struct stack* new;
    new = (struct stack*)malloc(sizeof(struct stack));
    new = push(a,2);
    new = push(new, 3);
    new = push(new, 4);
    peek(new);
    new = pop(new);
    peek(new);
    new = pop(new);
    peek(new);
    new = pop(new);
    peek(new);
    return 0;
    
}

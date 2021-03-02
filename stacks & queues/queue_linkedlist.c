#include<stdio.h>
#include<stdlib.h>

struct queue{
    int data;
    struct queue* next;
};

struct queue* enq(struct queue* n,int data){
    struct queue* new;
    new = (struct queue*)malloc(sizeof(struct queue));
    
    n->next=new;
    new->data=data;
    new->next=NULL;
    return new;
}

struct queue* deq(struct queue* n){
    struct queue* start;
    start = (struct queue*)malloc(sizeof(struct queue));
    start = n->next;
    n = start;
    return n;
}

int peek(struct queue* n){
    printf("%d \n", n->data);
}

int main(){
    struct queue* start;
    start = (struct queue*)malloc(sizeof(struct queue));
    struct queue* new;
    start->data=1;
    new = (struct queue*)malloc(sizeof(struct queue));
    new = enq(start,10);

    new = enq(new,2);

    new = enq(new,3);
    peek(start);
    start = deq(start);
    start = deq(start);
    start = deq(start);
    peek(start);

    return 0;
}
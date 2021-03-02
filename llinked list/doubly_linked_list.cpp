#include<stdio.h>
#include<iostream>

using namespace std;

class node{
    public:
    int value;
    node* next;
    node* prev;  
};
/*
void append(node *n,int data){
    node *new_element = NULL;
    new_element = new node();
    n->next=new_element;
    new_element->value=data;
    new_element->next=NULL;
}

node* prepend(node *n, int data){
    node* new_element = NULL;
    new_element = new node;
    new_element->value=data;
    new_element->next=n;
    return new_element;
}

node* insert(node* n, int data){
    node* new_element= NULL;
    new_element = new node;
    node* a;
    a = n->next;
    new_element->value=data;
    n->next=new_element;
    new_element->next=a;
    return new_element;
}

void delete_element(node* n){
    node *a;
    a = n->next;
    n->value = a->value;
    n->next= a->next;
}
*/
void print_list_reverse(node *n){
        while (n!=NULL)
        {   
            cout<<n->value<<" ";
            n = n->prev;
            
        }}

int main(){

    node *first=NULL;
    node *second=NULL;
    node *third=NULL;

    first = new node(); 
    second = new node(); 
    third = new node(); 

    first->value=1;
    first->next=second;
    first->prev=NULL;

    second->value=2;
    second->next=third;
    second->prev=first;
    
    third->value=3;
    third->next=NULL;
    third->prev=second;
    
    print_list_reverse(third);
    
}
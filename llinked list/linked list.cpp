#include<stdio.h>
#include<iostream>

using namespace std;

class node{
    public:
    int value;
    node* next;  

    
};

node* append(node *n,int data){
    node *new_element = NULL;
    new_element = new node();
    n->next=new_element;
    new_element->value=data;
    new_element->next=NULL;
    return new_element;
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

void print_list(node *n){
        while (n!=NULL)
        {   
            cout<<n->value<<" ";
            n = n->next;
            
        }}

void reverse(node* n){
    node* prev= NULL;
    while (n!=NULL)
    {
        node* b = n;
        node* a = n->next;
        n->next=prev;
        n=a;
        cout<<a<<" ";
        prev=b;
    }
    
}

int main(){

    node *first=NULL;
    node *second=NULL;
    node *third=NULL;

    first = new node(); 
    second = new node(); 
    third = new node(); 

    first->value=1;
    first->next=second;
    second->value=2;
    second->next=third;
    third->value=3;
    third->next=NULL;
    
    node* last = append(third,1);
    node *new_first = prepend(first,0);
    insert(first,7);
    delete_element(first);

    print_list(new_first);
    cout<<endl;
    reverse(new_first);
    cout<<endl;
    print_list(last);
    //print_list(new_first);
    
}
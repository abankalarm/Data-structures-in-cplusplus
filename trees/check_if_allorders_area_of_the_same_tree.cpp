#include<stdio.h>
#include<iostream>

class node{
    public:
    int data;
    node * left, *right;
    node* newNode(int data) {
{ 
    node *temp = new node; 
    temp->data = data; 
    temp->left = temp->right = NULL; 
    return temp; 
    }}

};

int search(int arr[], int start, int end, int value){
    for (int i=start; i<=end;i++){
        if(arr[i]==value)
            return i;
    }
}

node* buildtree(int in[], int pre[], int inStrt, int inEnd){
    static int preindex=0;

    if (inStrt>inEnd){
        return NULL;
    }
}
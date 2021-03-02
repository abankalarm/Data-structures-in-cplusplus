#include<iostream>
#include<stdio.h>

using namespace std;

int finder_first(int arr[],int l,int key){
    int m;
    for(int i = 0;i<=l;i++){
        if(arr[i]==key){
            return i; 
        }
        
    }return -1;
}

int finder_last(int arr[],int l,int key){
    int m;
    for(int i = l;i>=0;i--){
        if(arr[i]==key){
            return i; 
        }
       
        
    }
    return -1;
}

int main(){
    int arr[] = {5, 7, 7, 8, 8, 10};
    int l = sizeof(arr)/sizeof(arr[0]);
    int start = finder_first(arr,l, 8);
    int last = finder_last(arr,l,8);

    cout << start;
    cout<<"Hola, moondo.\n"<<last;
    return 0;
}
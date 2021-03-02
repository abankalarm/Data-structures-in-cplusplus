#include<stdio.h>
#include<iostream>
using namespace std;

int find_element(int arr[], int n, int key){  //takes longer than insertion
    int i;
    for (i=0;i<=n;i++){
        if (arr[i]==key){
            return i+1;
        }
        continue;
    }
}

int insert(int arr[],int n, int key, int capacity){  //O(1)
    if (capacity==n){
        cout<<"cannot add more elements";}
    else
    {
     arr[n]= key;
     return n+1;   
    }
}

int deleteelement(int arr[], int n,int key){ //O(n)
    for (int i=0; i<=n;i++){
        if (arr[i]==key){
            for (;i<=n;i++){
                arr[i]=arr[i+1];
                arr[n]= NULL;
            }
        }
    }
    return n-1;
}

int main(){
    int arr[10] = {1,2,3,4,5,3,2,1};
    int n = 8;
    int capacity = sizeof(arr)/sizeof(1);
    cout<<find_element(arr,n,5);
    cout<<endl;
    n = insert(arr,n, 10, capacity);
    n = deleteelement(arr, n, 5);
    for (int i = 0; i < n; i++) {
        cout << arr[i]<< " "; 
    }
}
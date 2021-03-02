#include<stdio.h>
#include<iostream>

using namespace std;

void reverse_array(int arr[], int n){
    int i, m;
    if  (n%2==0){
        m=n/2;
    }
    else
    {
        m=(n-1)/2;
    }
    
    for (int i=0; i<=m;i++){
        int t = arr[i];
        arr[i] = arr[n-i];
        arr[n-i] = t;
    }    
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    reverse_array(arr, n);
    for(int i=0; i<=n-1 ; i++){
        cout<<arr[i]<<endl;
    }
}
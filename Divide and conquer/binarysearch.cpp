#include<stdio.h>
#include<iostream>

using namespace std;

//O(Log n)
/*
We basically ignore half of the elements just after one comparison.

Compare x with the middle element.
If x matches with middle element, we return the mid index.
Else If x is greater than the mid element, then x can only lie in right half subarray after the mid element. So we recur for right half.
Else (x is smaller) recur for the left half.
*/

int binary(int k,int arr[], int start, int end){
    int m;

    if ((end+start)%2==0)
        m = (end+start)/2;
    else
    {
        m = (end+start-1)/2;
    }

    if (k == arr[m]){
        return m;
    }

    if (k > arr[m]){
        binary(k,arr,m+1,end);
    }
    else 
    {
        binary(k,arr,start,m-1);
    }  
}

int main(){
    int arr[] = { 2, 3, 4, 10, 40 };
    int m =  binary(40,arr, 0,4);
    cout<<m;
}

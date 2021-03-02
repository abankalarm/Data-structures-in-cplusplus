#include<iostream>
#include<stdio.h>

using namespace std;

int *sort(int c,int m){
    int arr[m]={0};
    int p = 0;
    int n = (c+1)/2; //number of times it is passed properly 
    int imp = 2*n+1;
    int final = imp - c;
    for (int i = 0;i<=m;i++){
        p++;
        arr[i] += p;
        if (i == m && m <= n){
            i = 0;
        }
        if (p >= n){
            arr[i+1] += final;
            return arr;
        }
        
    }
    

}

int main(){
    int candies = 7;
    int men = 4;
    int *arr = sort(candies,men);
    int l = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i <= l;i++){
        cout << arr[i] << endl;
    }
    return 0;
}
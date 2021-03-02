#include<stdio.h>
#include<iostream>

using namespace std;



int merge_arrays(int arr1[], int arr2[], int capacity, int mergedarray[]){

    int i = 0;
    int j =0;
    int array1= arr1[i];
    int array2= arr2[j];
    int arr1size = 4;
    
    
    for(int k=0;k<capacity;k++){
        if (!array1 || array1 < array2){
            //n = insert(mergedarray, n,array1,capacity);
            if (i<4){
                cout << array1<<'x'<< array2<<endl;
            i++;
            array1 = arr1[i];

            }
            else
            {
                 
            cout << array2<<endl;
            j++;
            array2 = arr2[j];

            }
            
            
            
        }

        else
        {
            //n = insert(mergedarray,n, array2,capacity);
            
            
            
            
            cout << array2<<endl;
            j++;
            array2 = arr2[j];

        }
        
    }
    return 0;
    
}


int main(){
    int arr1[] = {1,3,5,7};
    int arr2[] = {2,4,6,8,9,10};
    int capacity = sizeof(arr1)/sizeof(arr1[0]) + sizeof(arr2)/sizeof(arr2[0]);
    cout << capacity<< endl<<endl;
    int mergedarray[capacity];
    merge_arrays(arr1, arr2, capacity, mergedarray);
    for(int i=0;i<=capacity-1;i++){
        //cout << mergedarray[i]<<endl;
    }
}
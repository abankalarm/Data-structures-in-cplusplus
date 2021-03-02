#include<stdio.h>
#include<iostream>

using namespace std;

const int stack_size=50;

class stack{
    public:
    int s[stack_size];
    stack(){
        
        for(int i=0; i<=stack_size;i++){
            s[i]=NULL;
        }
    };
    int insert(int k,int n){
        s[n] = k;
       
        return n+1;
    }
    void show(int n){
        
        for(int i=n; i>=0;i--){
            cout<<s[i]<<endl<<endl;
        }
    }



};
 
int main(){

    stack s;
    int n=0;
    n = s.insert(1,n);
    
    n = s.insert(2,n);
    
    n = s.insert(4,n);
  
    s.show(n-1);
}

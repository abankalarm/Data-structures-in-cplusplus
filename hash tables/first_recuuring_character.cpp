#include<stdio.h>
#include<iostream>

using namespace std;
const int T_S = 50;
class hashmapentry{
    public: 
    int k;
    int v;
    hashmapentry(int k, int v){
        this->k=k;
        this->v=v;
    }
};

class hashmaptable{
    private:
        hashmapentry **t;
    public:
        hashmaptable(){
            t= new hashmapentry *[T_S];
            for (int i=0;i<T_S;i++){
                t[i] = NULL;
            }}
        int hash(int k){
            int h = k%50;
            return h;
        }
        int extra(int v,int k){
            int h = hash(k);
            if (t[h] != NULL){
                return 999;
            }
            else{ 
            t[h] = new hashmapentry(k,v);
            return 0;
            }
        }
};

int main(){
    int array[]= {1,2,3,4,2,5,6,6};
    hashmaptable hash;
    int n = sizeof(array)/sizeof(array[0]);
    for (int i=0; i < n;i++){
        int a = hash.extra(i,array[i]);
        if (a==999){
            cout<<array[i]<<endl;
        }
        cout <<"not found"<<endl;
    }
}
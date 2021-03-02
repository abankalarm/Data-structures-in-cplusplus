#include<iostream>
#include<stdio.h>

using namespace std;
const int T_S= 200; //table size
class hashtableentry{
    public:
        int k;
        int v;
        hashtableentry(int k,int v){
            this->k=k;
            this->v=v;
        }
};

class hashmaptable{
    private:
        hashtableentry **t;
    public:
        hashmaptable(){
            t= new hashtableentry * [T_S];
            for (int i=0;i<T_S;i++){
                t[i]=NULL;
            }
        }
        int hashfunc(int k){
            return k%T_S;
        }
        void insert(int k,int v){
            int h = hashfunc(k);
            while (t[h] != NULL){
                h= hashfunc(h+1);
            }
            //if (t[h] != NULL)
            //    delete t[h];
            t[h] = new hashtableentry(k, v);
        }

        int search(int k){
            int h = hashfunc(k);
            if (t[h] != NULL){
                int value = t[h]->v;
                return value;
            }
            else
            {
                return 0;
            }
            
        }
};

int main(){
    hashmaptable hash;
    hash.insert(1,1000);
    hash.insert(1,999);
    for (int i=0;i<=10;i++){
        cout<< hash.search(i)<<endl;
    }
}
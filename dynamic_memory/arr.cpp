#include<bits/stdc++.h>
using namespace std;

int main(){
    int *ptr = new int[5];
    ptr[0]=1;
    ptr[1]=2;
    ptr[2]=3;
    ptr[3]=4;
    ptr[4]=5;
    for(int i=0;i<5;++i){
        cout << ptr[i]<<" ";
    }
    delete []ptr;
    return 0;
}
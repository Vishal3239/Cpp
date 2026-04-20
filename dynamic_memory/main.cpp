#include<bits/stdc++.h>
using namespace std;

int main(){
    int *ptr = new int;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    cout<<&ptr<<endl;
    *ptr=100;
    cout<<*ptr<<endl;
    delete ptr;
    cout<<*ptr;


    
    return 0;
}
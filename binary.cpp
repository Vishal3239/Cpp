#include<iostream>
using namespace std;

int binary(int n){
    int ans=0,pow=1;
    while(n>0){
        int remender,decnum;
        remender=n%2;
        n/=2;
        ans+=(remender*pow);
        pow=(pow*10);
    }
    return ans;
}

int main(){
    int x;
    cout<<"enter any number ";
    cin>>x;
    cout<<"Binary numbver is= "<<binary(x);
    return 0;
}
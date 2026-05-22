#include<iostream>
using namespace std;
int main(){
    int a=0,b=1,sum=0,n,i=1;
    cout<<"Enter any number= ";
    cin>>n;
    for( i=1;i<=n;++i){
        if(i==1){
            cout<<a<<"  ";
            continue;
        }
        if(i==2){
            cout<<b<<"  ";
            continue;
        }
        sum=a+b;
        a=b;
        b=sum;
        cout<<sum<<"  ";
    }

    return 0;
}
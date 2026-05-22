#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter Three number"<<endl;
    cin>>a>>b>>c;
    if((a>b)&&(a>c)){
        cout<<a<<" is greastest all three number ";
    }else if((b>c)&&(b>a)){
        cout<<b<<" is greastest all three number ";
    }else{
        cout<<c<<" is greastest all three number ";
    }
    return 0;
}
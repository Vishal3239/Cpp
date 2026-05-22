#include<iostream>
using namespace std;
int main(){
    int a;
    char b;
    float c;
    double d;
    cout<<"Enter intger= ";
    cin>>a;
    cout<<"Enter charter= ";
    cin>>b;
    cout<<"Enter float= ";
    cin>>c;
    cout<<"Enter double= ";
    cin>>d;
    cout<<" size of store byte"<<endl;
    cout<<"size of int= "<<sizeof(a)<< " Byte"<<endl;
    cout<<"size of char= "<<sizeof(b)<< " Byte"<<endl;
    cout<<"size of float= "<<sizeof(c)<< " Byte"<<endl;
    cout<<"size of double= "<<sizeof(d)<< " Byte"<<endl;
    return 0;
}
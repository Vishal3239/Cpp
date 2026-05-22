#include<iostream>
using namespace std;
int sumn(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    return sum;
}
double sum(double a, double b){
    return a+b;
}
// pass by value
double pass(double a, double b){
    return a/b;
}
int main(){
    int x,y;
    cout<<"Enter two value=";
    cin>>x>>y;
    cout<<"sum = "<<sumn(10)<<endl;
    cout<<"sum = "<<sumn(100)<<endl;
    cout<<"sum = "<<sumn(50)<<endl;
    cout<<"sum = "<<sumn(80)<<endl;
    cout<<"sum = "<<sum(5.55,54)<<endl;
    cout<<"divion= "<<pass(x,y);
    return 0;
}
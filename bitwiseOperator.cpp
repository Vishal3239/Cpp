#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int b = 7;
    cout << "a & b : " << (n & b) << endl;
    cout << "a | b : " << (n | b) << endl;
    cout << "~a  : " << (~n) << endl;
    cout << "a ^ b : " << (n^b) << endl;

}

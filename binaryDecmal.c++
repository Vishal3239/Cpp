#include<iostream>
#include <math.h>
using namespace std;
int main(){
    // decimal to binary
    /* int n;
    cout<<"Enter Number: ";
    cin>>n;
    int binary[32];
    int i =0;
    while(n > 0){
        binary[i] = n%2;
        n = n/2;
        i++;
    }
    for(int j = i-1; j>=0; j--){
        cout<<binary[j];
    } */

    // binary to decimal
    long long binary;
    cout << "enter binary number: ";
    cin >> binary;
    int dec = 0, i = 0;
    while (binary > 0)
    {
        int dig = binary % 10 ;
        dec += dig * pow(2, i);
        binary = binary / 10;
        i++;
    }
    cout << dec;
    
}
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter Number: ";
    cin >> n;
    int i = 1;
    while(i < n){
        if(n % (i+1) != 0){
            cout << "Number is Prime";
            
        }else{
            cout << "Number is not prime";
        }
        i++;
    }

    return 0;
}

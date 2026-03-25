#include<iostream>
using namespace std;
int revArray(int num[], int n){
    cout << "Reverse Number is : ";
    for(int i = (n-1); i >= 0 ; i--){
        cout<< num[i] << " ";
    }
}
int main(){
    int n ;
    cout<< "enter size of array: ";
    cin >> n;
    int num[100];
    cout << "enetr number: ";
    for(int i = 0; i < n; i++){
        cin >> num[i];
    }
    revArray(num,n);
}
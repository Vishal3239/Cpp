#include<iostream>
using namespace std;
int main(){
    char n ;
    cout << "Enter any charector: " << endl;
    cin >> n ;
    if(n >= 97 && n <= 122){
        cout << "Lower case";
    }else if(n >= 65 && n <= 90){
        cout << "Uppper case";
    }else{
        cout << "input is number";
    }
}
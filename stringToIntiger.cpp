#include<iostream>
#include<string>
#include<climits>
using namespace std;
int myAtoi(string s){
    int i = 0;
    int n = s.size();
    int sign = 1;
    long ans = 0;
    // ignore space
    while(i < n && (s[i] == ' ')){
        i++;
    }
    //check sign
    if(i < n && (s[i] == '+' || s[i] == '-')){
        if(s[i] == '-'){
            sign = -1;
        } 
        i++;
    }
    // read degit
    while(i < n && isdigit(s[i])){
        int dig = s[i] - '0';
        ans = ans * 10 + dig;
        // check overflow
        if(ans * sign > INT_MAX){
            return INT_MAX;
        }
        if(ans * sign < INT_MIN){
            return INT_MIN;
        }
        i++;

    }
    return (int)(ans * sign);
}

int main(){
    string s;
    cout << "Enter any string: ";
    getline(cin, s);
    cout << "Answer is : " << myAtoi(s) << endl;

}
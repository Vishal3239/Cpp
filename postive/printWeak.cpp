#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"'Enter 1-7 any number then find day of weak ";
    cin>>n;
    switch (n)
    {
    case 1:
        cout<<"Sunday";
        break;
    case 2:
        cout<<"Monday";
        break;
    case 3:
        cout<<"Tuesday";
        break;
    case 4:
        cout<<"Wednesday";
        break;
    case 5:
        cout<<"Thirsday";
        break;
    case 6:
        cout<<"Friday";
        break;
    case 7:
        cout<<"Saturday";
        break;
    
    default:
        cout<<"Envalide number";
        break;
    }
    return 0;
}
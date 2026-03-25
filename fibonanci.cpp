#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    int a = 0, b=1, c = 0;
    int result = 0;
    cout << "serise is : ";
    for(int i = 1; i <= n; i++){
        cout<< a << " ";
        result += a;
        c = a + b ;
        a = b ;
        b = c ;
        
    }
    cout<< endl;
    if(n == 1){
        cout<< " result is: 0";
    }else{
        cout<< "result is : " << result;
    }
}
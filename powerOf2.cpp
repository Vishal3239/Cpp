#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout << "enter number:";
    cin >> n;
    int x=0;
    for(int i = 0; i <= 30; i++){
        int ans = pow(2,i);
        if(ans == n){
            x++;
        }
    }
    if(x==1)
    cout<<"true";
    else
    cout<<"false";
    
    
    
    


}
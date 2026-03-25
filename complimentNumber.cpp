#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout << "Enter number: ";
    cin >> n ;
    int i = 0, binary[32];
   // int ans[32],l=0;
   if(n == 0){
        cout << "compliment is : 1";
        return 0;
   }
   
    while( n != 0){
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }
    int dec = 0;
    for(int j = i-1; j >= 0; j--){
        //cout << binary[j];
        dec += binary[j]*pow(2,j);
        
    }
    //cout<<endl;
    
    //cout << dec << endl;

    int marsk = (pow(2,i)-1);
    //cout << "mask: "<< marsk << endl;
    int compliment = (dec^marsk);
    cout<< "complemt is : "<< compliment;
    
   // cout<<endl;
    /* while(marsk != 0){
        ans[l] = marsk % 2;
        marsk = marsk / 2;
        l++;
    }
    for(int k = l-1; k>=0;k--){
        cout << ans[k];
    } */
    
    


}
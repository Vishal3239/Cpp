#include<iostream>
using namespace std;
int main(){
    int n;
    cout<< " enter size of array: ";
    cin>>n;
    int num[100];
    cout<< "Enter number: ";
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    cout<<endl;
    cout<<"unique number is: ";
    int ans = 0;
    for(int j = 0;j<n;j++){
        ans = ans^num[j];
    }
    cout<<ans;
}
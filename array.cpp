#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of Array: ";
    cin>>n;
    int arr[50];
    //input
    for(int i = 0; i< n; i++){
        cin>>arr[i];
    }
    // output
    cout<<endl;
    cout<<"Array is: ";
    for(int j = 0; j< n; j++){
        cout<<arr[j]<<" ";
    }
    //push
    int z;
    cout<<"Enter any element: ";
    cin>>z;
    
    return 0;
}
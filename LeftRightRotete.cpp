#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7,8};
    int k=3;
    int n=sizeof(arr)/sizeof(arr[0]);
    k=k%n;
    cout<< " LEFT ROTETE "<<endl;
    for(int i=k;i<n;++i){
        cout<<arr[i]<<" ";
    }
    for(int i=0;i<k;++i){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<< " RIGHT ROTETE "<<endl;

    for(int i=n-k;i<n;++i){
        cout<<arr[i]<<" ";
    }
    for(int i=0;i<n-k;++i){
        cout<<arr[i]<<" ";
    }
    return 0;
}
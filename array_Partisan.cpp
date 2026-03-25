#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7,8};
    int k;
    cout<<"enter k: ";
    cin>>k;
    int index=0;
    
    int n=sizeof(arr);
    for(int i=0;i<n;i++){
        arr[index]=arr[k--];
    }
    for(int i=0;i<n;i++){
        cout<<arr[index];
    }
    return 0;
}
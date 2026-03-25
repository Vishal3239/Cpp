#include<bits/stdc++.h>
using namespace std;

int partition(int arr[],int start,int end){
    int pos=start;
    for(int i=start;i<=end;++i){
        if(arr[i]<=arr[end]){
            swap(arr[i],arr[pos]);
            pos++;
        }
    }
    return pos-1; 
}

void quickSort(int arr[],int start,int end){
    if(start>=end)
    return;
    int pivot=partition(arr,start,end);
    quickSort(arr,start,pivot-1);
    quickSort(arr,pivot+1,end);
}
int main(){
    int arr[]={10,20,3,2,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    quickSort(arr,0,n);
    for(int a:arr){
        cout<<a<<" ";
    }
    return 0;
}
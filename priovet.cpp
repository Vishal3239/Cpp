#include<iostream>
using namespace std;

int priovetIndex(int arr[], int size){
    int start = 0;
    int end = size - 1;
    int mid = start + ( end - start) / 2 ;
    while(start < end ){
        if(arr[mid] >= arr[end]){
            start = mid + 1 ;
        }else{
            end = mid;
        }
        mid = start + ( end - start) / 2 ;
    }
    return arr[start];
}

int main(){
    int num[4] = {6,7,8,9};
    int ans = priovetIndex(num,4);
    cout<< "priovet index of number : " << ans;
}
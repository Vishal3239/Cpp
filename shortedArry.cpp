#include<iostream>
using namespace std;

void sortArr(int arr[], int n){
      for(int i=0; i < n-1; i++){
        int index = i;
        for(int j= i+1; j < n; j++){
            if(arr[j] < arr[index])
            index = j;
        }
        swap(arr[i], arr[index]);
    }
    
}

int main(){
    int arr[5]={12,10,5,21,25};
   
    cout<< "orginal arr: ";
    for(int i=0;i<5;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
     sortArr(arr,5);
    cout<<"sort arrry: ";
    for(int j=0;j<5;j++)
    cout<<arr[j]<<" ";
    cout<< endl;



}
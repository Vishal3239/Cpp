#include<iostream>
using namespace std;
int main(){
    int a[]={1,2,0,8,0,3,6};
    int n = sizeof(a)/sizeof(a[0]);
    int newIndex = 0;
    for(int i=0;i<n;++i){
       if(a[i]!=0){
        a[newIndex]=a[i];
        newIndex++; 
       }
    }
    for(int i=newIndex;i<n;++i){ 
       
        a[newIndex]=0;
        newIndex++;
       
    }
    for(int i=0;i<7;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}

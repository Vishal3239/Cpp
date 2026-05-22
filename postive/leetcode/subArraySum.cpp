#include<iostream>
#include<vector>
using namespace std;
//kadane`s algorithm
int kad(){
    int cm=0,maxSum=INT16_MIN;
    int n=5;
    int arry[]={1,2,-5,3,-2};
    for(int i=0;i<n;i++){
        cm+=arry[i];
        maxSum=max(cm,maxSum);
        if(cm<0){
            cm=0;
        }
    }
    return maxSum;
}

// brute force approach
int main(){
    int n=5;
    int arr[]={1,-2,5,6,-4};
    for(int st=0;st<n;st++){
        for(int end=st;end<n;end++){
            for(int i=st;i<=end;i++){
                cout<<arr[i];
            }
            cout<<" ";
        }
        cout<<endl;
    }
    int maxsum=INT16_MIN;
    for(int st=0;st<n;st++){
        int sum=0;
        for(int end=st;end<n;end++){
            sum+=arr[end];
            maxsum=max(sum,maxsum);
        }
    }
    cout<<"Max subarrysum="<<maxsum<<endl;
    cout<<"sum="<<kad();
    return 0;
}

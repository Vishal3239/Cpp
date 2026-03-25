#include<iostream>
#include<climits>
using namespace std;
int maxNumber(int num[], int n){
    int max = INT_MIN;
    for(int i = 0; i < n; i++){
        if(num[i] > max){
            max = num[i];
        }
    }
    return max;
}

int minNumber(int num[], int n){
    int min = INT_MAX;
    for(int i = 0; i < n; i++){
        if(num[i] < min){
            min = num[i];
        }
    }
    return min;
}
int main(){
    int n;
    cout<< "Enter size of array: ";
    cin>>n;
    int num[100];
    cout << "enter input number: ";
    for(int i = 0; i < 5; i++){
        cin >> num[i];
    }
    cout << "Max Number is : " << maxNumber(num,n) << endl;
    cout << "Min Number is : " << minNumber(num,n);
}

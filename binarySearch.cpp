#include<iostream>
using namespace std;
int binarySearch(int arr[], int size, int key){
    int start = 0 ;
    int end = size - 1 ;
    int mid = ( start + end ) / 2 ;

    while( start <= end ){
        if( arr[mid] == key )
        return mid;

        if( key > arr[mid] ){
            start = mid + 1;
        }else{
            end = mid - 1;
        }
        mid = ( start + end ) / 2 ;
    }
    return -1;
}

int main(){
    int even[6] = { 1, 2 , 5, 10, 15, 20};
    int odd[5] = { 8, 12 , 14, 19, 25};

    int evenIndex = binarySearch( even, 6, 15);
    cout<< "index of 20 is : "<< evenIndex << endl ;

    int oddIndex = binarySearch( odd, 5, 8);
    cout<< "index of 14 is : "<< oddIndex << endl ;
}
#include <iostream>
using namespace std;

void swapAlter(int num[], int n)
{
    {
        for (int i = 0; i < n; i+=2)
        {
            if(i+1<n){
                swap(num[i],num[i+1]);
            }
            
        }
    }
}

void printArr(int num[], int n)
{
    cout << "Alternate Number: ";
    for (int i = 0; i < n; i++)
    {
        cout << num[i] << " ";
    }
}

int main()
{
    int n;
    cout << "enter size of array: ";
    cin >> n;
    int num[100];
    cout << "enetr number: ";
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    swapAlter(num, n);
    printArr(num, n);
}
#include <iostream>
using namespace std;

int alternateSum(int n)
{
    int sum = 0;
    int count=0;
    int digit[10];
    while (n > 0)
    {
        digit[count++]= n % 10;
        n = n / 10;
        
    }
    
    for(int j = count-1,pos = 0; j >= 0; j--,pos++){
        if(pos%2==0)
        sum += digit[j];
        else
        sum -= digit[j];
    }

    return sum;
}
int main()
{
    int n;
    cout << "enter number:";
    cin >> n;
    int result = alternateSum(n);
    cout<< "Answer is : "<< result;
}
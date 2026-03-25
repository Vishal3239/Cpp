#include<stdio.h>
int main(){
    int n,re=0,number,rem;
    printf("enter number: ");
    scanf("%d",&n);
    number=n;
    while (n!=0)
    {
        rem=n%10;
        re=(re*10)+rem;
        n/=10;
    }
    if(number==re){
        printf("number is palindrome");
    }else{
        printf("number is not palindrome");
    }
    return 0;
    
}
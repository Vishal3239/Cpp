#include<stdio.h>
int main(){
    int n = 11,prime=1;
    for(int i = 2;i<=n/2;i++){
        if(n%i==0){
            prime=0;
            break;
        }
    }
    if(prime==1){
        printf("prime");
    }else{
        printf("not prime");
    }
}
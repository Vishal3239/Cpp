#include<stdio.h>
void f1(){
    static int x=-17;
    x=x-7;
    printf("%d \n",x+x);
}
int main(){
    f1();
    f1();
    f1();
    return 0;
}
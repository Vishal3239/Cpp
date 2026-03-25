#include<stdio.h>
int main(){
    int a[4][4]={{2,3,4,6},{4,3,0,2},{5,6,8,1},{4,3,2,3}};
    
    // Row Sum
    for(int i=0;i<4;i++){
        int result=0;
        for(int j=0;j<4;j++){
            
            result += a[i][j]; 
        }
        printf("rowsum= %d %d \n",i,result);
    }
    printf("\n");
    //column sum
    for(int j=0;j<4;j++){
        int result2=0;
        for(int i=0;i<4;i++){
            
            result2 += a[i][j]; 
        }
        printf("columnSum= %d %d \n",j,result2);
    }
    return 0;
}
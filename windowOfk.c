#include<stdio.h>
int main()
{
    int arr[]={1,3,-1,-3,5,3,6,7};
    int k=3;
   // new_index=0;
    int n = sizeof(arr)/sizeof(arr[0]);
   // printf("n=%d",n);
    // for(int i=0; i<n-(k-1); ++i){
    //     //while(k!=1)
    //     if(arr[i]>arr[i+1] && arr[i]>arr[i+2]){
    //         arr[new_index]=arr[i];
    //         new_index++;
    //     }else if(arr[i+1]>arr[i] && arr[i+1]>arr[i+2]){
    //         arr[new_index]=arr[i+1];
    //         new_index++;
    //     }else{
    //         arr[new_index]=arr[i+2];
    //         new_index++;
    //     }
    // }
    // for (int i = 0; i < new_index; i++)
    // {
    //     /* code */
    //     printf("%d ",arr[i]);
    // }

    // for(int i=0;i<n-(k-1);++i){
    //     while(k!=1){
    //         if(arr[i]>arr[i+1]){
    //             arr[new_index]=arr[i];
    //             new_index++;
    //         }
    //         k--;
    //     }
    //     //new_index++;
    // }
    // for (int i = 0; i < new_index; i++)
    // {
    //     /* code */
    //     printf("%d ",arr[i]);
    // }
    for(int i=0;i<=n-k;++i){
        int max=arr[i];
        for(int j=i;j<i+k;++j){
            if(arr[j]>max)
            max=arr[j];
        }
        printf("%d ",max);
    }
    
    return 0;
}
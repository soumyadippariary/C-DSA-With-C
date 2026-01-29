
#include<stdio.h>
int bubble_short(int arr[5],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=n-2-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;

            }
        }
    }
}
int main(){
   int arr[5];
    int n=5;
    printf("enter the 5 elements :\n");
    for(int i=0;i<=4;i++){
        printf("\narr[%d]=",i);
        scanf("%d",&arr[i]);
    }
    printf("\n\nthe shorted order is :\n\n") ;
    bubble_short(arr,n);
    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }

}
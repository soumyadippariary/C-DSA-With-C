#include<stdio.h>
#include<limits.h>
void selection_short(int arr[10],int n){
    for(int i=0;i<n-1;i++){
         int min=INT_MAX;
         int min_index=-1;
         for(int j=i;j<=n-1;j++){
            if(min>arr[j]){
                min=arr[j];
                min_index=j;
            }
        }
            int temp=arr[min_index];
            arr[min_index]=arr[i];
            arr[i]=temp;
         
    
    }

}
int main(){
    int n=10;
    int arr[10];
    printf("enter the 10 elements:");
    for(int i=0;i<10;i++){
        printf("arr[%d]=",i);
        scanf("%d",&arr[i]);
    }
    selection_short(arr,n);
    printf("  the sorted array is \n\n");
     for(int i=0;i<10;i++){
        printf("%d ",arr[i]);
    }
    return 0;



}
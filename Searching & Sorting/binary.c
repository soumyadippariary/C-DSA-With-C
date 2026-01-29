#include<stdio.h>
int binary_search(int arr[10],int key,int size){
    int low=0;
    int high=size-1;
    int mid;(low+high)/2;
    while(low<high){
       mid=(low+high)/2;
      if(arr[mid]==key){
        return mid;
      }
      else{
        if(arr[mid]>key){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
      }
    }
    return -1;
}
int main(){
    int arr[10]; int key;
    printf("enter the 10 elements :\n");
    for(int i=0;i<=9;i++){
        printf("\narr[%d]=",i);
        scanf("%d",&arr[i]);
    }
    printf("\nenter the key:");
    scanf("%d",&key);
    int result=binary_search(arr,key,10);
    if(result!=-1){
        printf("\n%d element find in %d index ",key,result);
    }
    else{
         printf("\n%d element  not found   ",key);

    }
    return 0;
}
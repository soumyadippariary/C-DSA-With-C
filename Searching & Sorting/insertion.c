#include<stdio.h>
#include<limits.h>
void inseartion_short(int arr[5],int n){
    for(int i=1;i<=n-1;i++){
        int j=i;
    while(arr[j]<arr[j-1]){
        int temp=arr[j];
        arr[j]=arr[j-1];
        arr[j-1]=temp;
        j--;
    }

}
}
int main(){
    int n=5;
    int arr[5];
    printf("enter the 5 elements:");
    for(int i=0;i<5;i++){
        printf("arr[%d]=",i);
        scanf("%d",&arr[i]);
    }
    inseartion_short(arr,n);
    printf("  the sorted array is \n\n");
     for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
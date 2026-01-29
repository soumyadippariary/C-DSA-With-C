#include<stdio.h>
void print_array(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
 int partion(int arr[],int low,int high){
    int pivot=arr[high];
    int i=low-1;
    for(int j=low;j<high;j++){
        if(arr[j]<=pivot){
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    i++;
    swap(&arr[i],&arr[high]);
    return i;

 }
void quick_short(int arr[5],int low,int high){
    if(low<high){
        int pi=partion(arr,low,high);
        quick_short(arr,low,pi-1);
        quick_short(arr,pi+1,high);

    }
    

}
int main(){
    int n=5;
    int arr[5];
    printf("enter the 5 elements:");
    for(int i=0;i<n;i++){
        printf("arr[%d]=",i);
         scanf("%d",&arr[i]);
    }
    quick_short(arr,0,n-1);
    printf("\n\nthe sorted arry is : \n\n");
    print_array(arr,n);


}
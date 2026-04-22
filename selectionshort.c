#include<stdio.h>
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
void selection_short(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int min_indx=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min_indx]){
                min_indx=j;
            }
        }
        swap(&arr[i],&arr[min_indx]);
        printf("\n");
        printarray(arr,n);
    }
}
int main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter all elements of array:\n");
     
    for(int i=0;i<n;i++){
        printf("arr[%d]= ",i);
        scanf("%d",&arr[i]);
    }
    printf("\nInitial array: ");
    printarray(arr,n);

    selection_short(arr,n);

    printf("\nFinal sorted array: ");
    printarray(arr,n);

    return 0;
}
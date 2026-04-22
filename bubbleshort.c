#include <stdio.h>

void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

void printArray(int arr[], int n){
    for(int i=0;i<n;i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void bubble_sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int step=1;
        printf("\nPass %d:\n", i+1);
        for(int j=0;j<n-i-1;j++){  
            printf("Comparing arr[%d]=%d and arr[%d]=%d\n", j, arr[j], j+1, arr[j+1]);
            if(arr[j]>arr[j+1]){
                printf(" -> Swap %d and %d\n", arr[j], arr[j+1]);
                swap(&arr[j],&arr[j+1]);
                step=0;
            }
        }
        printf("Array after pass %d: ", i+1);
        printArray(arr,n);
        if(step==1){
            printf("No swaps in this pass, array is sorted.\n");
            break;
        }
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
    printArray(arr,n);

    bubble_sort(arr,n);

    printf("\nFinal sorted array: ");
    printArray(arr,n);

    return 0;
}

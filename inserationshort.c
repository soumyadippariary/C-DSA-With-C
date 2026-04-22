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
inseration_short(int n,int arr[]){
    for(int j=1;j<n-1;j++){
        int key=arr[j];
        int i=j-1;
        while(arr[i]>0&&arr[i]>key){
            arr[i+1]=arr[i];
            i--;

        }
        arr[i+1]=key;
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

    inseration_short(n,arr);

    printf("\nFinal sorted array: ");
    printarray(arr,n);

    return 0;
}
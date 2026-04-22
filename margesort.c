#include<stdio.h>

 void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
void marge(int arr[],int low,int mid,int high){
    int temp[high-low+1];
    int i=low,j=mid+1, k=0;
    while (i<=mid && j<=high){
        if(arr[i]<arr[j]){
            temp[k]=arr[i];
            k++,i++;
        }
        else{
            temp[k]=arr[j];
            k++,j++;

        }

    }
    while(i<=mid){
        temp[k]=arr[i];
        k++,i++;
    }
     while(j<=high){
        temp[k]=arr[j];
        k++,j++;
     }
     for(int i=0;i<(high);i++){
        arr[i]=temp[i];
     }
     
     
    
}
void margeshort(int arr[],int low,int high){
    if(low<high){
        int mid=(low+high)/2;
        margeshort(arr,low,mid);
        margeshort(arr,mid+1,high);
        marge(arr,low,mid,high);
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
    printf("\nFinal sorted array: ");
    margeshort(arr,0,n-1);
    printarray(arr,n);
    

    return 0;
}
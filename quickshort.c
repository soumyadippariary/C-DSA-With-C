   #include<stdio.h>
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int partion(int arr[],int low,int high){
    int pivot=arr[high];
    int i=low-1;
    for(int j=low;j<high;j++){
        if(arr[j]<pivot){
            i++;
            swap(&arr[j],&arr[i]);
        }
    }
    i++;
    swap(&arr[i],&arr[high]);
    return i;

}
 void quickshort(int arr[],int low,int high){
    if(low<high){
        int pi=partion(arr,low,high);
        quickshort(arr,low,pi-1);
        quickshort(arr,pi+1,high);
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
    
    quickshort(arr,0,n-1);

  printf("\nFinal sorted array: ");
  for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
  }
 

    return 0;
}


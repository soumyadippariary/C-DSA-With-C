#include<stdio.h>
void print_array(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
void marge(int arr[],int low,int mid,int high){
    int i=low,j=mid+1,k=low;
    int temp[high-low+1];
    while(i<=mid&&j<=high){
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
    for(i=low;i<=high;i++){
        arr[i]=temp[i];
    }
}

void marge_short(int arr[],int low,int high){
    if(low<high){
        int mid=(low+high)/2;
        marge_short(arr,low,mid);
        marge_short(arr,mid+1,high);
        marge(arr,low,mid,high);
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
     
    printf("\n\nthe sorted arry is : \n\n");
    marge_short(arr,0,n-1);
    print_array(arr,n);
    


}
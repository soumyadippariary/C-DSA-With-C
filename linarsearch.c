#include<stdio.h>
int linear_search(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
        
    }
    return -1;
}
int main(){
    int n,key;
    printf("\nenter the size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("\nenter the all element of array:");
     
    for(int i=0;i<n;i++){
        printf("arr[%d]= ",i);
        scanf("%d",&arr[i]);
    }
    printf("\nenter the search element:");
    scanf("%d",&key);
     int temp=linear_search(arr,n,key);
     if(temp==-1){
        printf("%d element are not found ",key);

     }
     else{
        printf("%d element are found in %d index",key,temp);
     }


}
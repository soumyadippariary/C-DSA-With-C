#include<stdio.h>
int linear_search(int arr[10],int key){
    for(int i=0;i<=9;i++){
        if(arr[i]==key){
            return i;
        }
    }
     return -1;

}
int main(){
     int arr[10];
     int key;
     printf("enter the 10 elements:\n");
     for(int i=0;i<10;i++){
        printf("\narr[%d]=",i);
        scanf("%d",&arr[i]);
     }
     printf("\n enter the search element:");
     scanf("%d",&key);
     int result=linear_search(arr,key);
     if(result==-1){
      printf("%d element are not found ",key);
     }
        
     else{
        printf("\n%d element are found in %d index\n",key,result);
     }
       

}
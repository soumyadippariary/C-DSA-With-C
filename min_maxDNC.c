#include<stdio.h>
int arr[100];
void min_max_problem(int low,int high,int *max,int *min){
    int max1, min1;
   
    if(low==high){
        *max=arr[low];
        *min=arr[low];
        
    }
    else{
        if(low==high-1){
            if(arr[low]<arr[high]){
                *min=arr[low];
                *max=arr[high];
            }
            else{
                *max=arr[low];
                *min=arr[high];        
            }
        }
        else{
            int mid=(low+high)/2;
            min_max_problem(low,mid,max,min);
            min_max_problem(mid+1,high,&max1,&min1);
            if(*max<max1){
                *max=max1;
            }
            if(*min>min1){
                *min=min1;
            }
             

        }

    }
}
int main(){
     int n,max,min;
     printf("enter the valu of n");
     scanf("%d ",&n);
     printf("enter the all element:\n");
     for(int i=0;i<n;i++){
      printf("arr[%d]= ",i);
       scanf("%d",&arr[i]);
     }
     min_max_problem(0,n-1,&max,&min);
     printf("maximum number is %d",max);
     printf("minmum number is %d ",min);
     return 0;
}
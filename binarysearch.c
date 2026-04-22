#include<stdio.h>
int binarysearch(int arr[],int low,int high,int key){
    printf("searching range[%d,%d]\n",low,high);
    if(low>high){
        printf("range[%d,%d] is empty->not found\n");
        return -1;
    }
    else{
        int mid=(low+high)/2;
        printf("mid=%d,arr[%d]=%d",mid,mid,arr[mid]);
        if(key==arr[mid]){
            printf("key %d at found at %d index\n",key,mid);
            return mid;

        }
        else{
            if(key<arr[mid]){
                printf("key %d<arr[%d]->search left part\n",key,mid);
                return binarysearch(arr,low,mid-1,key);
            }
            else{
                  printf("key %d>arr[%d]->search right part\n",key,mid);
                return binarysearch(arr,mid+1,high,key);
            }
        }
    }

}
int main(){
    int n;
    printf("enter the size of an array:");
    scanf("%d",&n);
    int arr[n]; 
    int key;
    printf("enter the search value:");
    scanf("%d",&key);
    printf("enter the all element of array:");
    for(int i=0;i<n;i++){
        printf("\narr[%d]= ",i);
        scanf("%d",&arr[i]);
    }
    int k=binarysearch(arr,0,n-1,key);
    if(k==-1){
        printf("%d ar not found\n",key);

    }
    else{
        printf("%d is found in %d index\n",key,k);
    }
}
#include<stdio.h>
void counting_short(int arr[],int n){
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    //init
    int count[max+1];
    for(int i=0;i<=max;i++){
        count[i]=0;

    }
    //store
    for(int i=0;i<n;i++){
        count[arr[i]]++;
    }
    for(int i=0;i<=max;i++){
        while(count[i]>0){
            printf("%d",i);
            count[i]--;
        }
    }
}
int main(){
    int arr[]={2,3,4,5,6,7,3};
    int n=7;
    counting_short(arr,n);

}
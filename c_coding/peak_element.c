#include<stdio.h>
int peak_element(int arr[],int n){
    if(n==1)
    return 0;
    if(arr[0]>=arr[1])
    return 0;
    if(arr[n-1]>=arr[n-2])
    return n-1;
    for(int i=1;i<n-1;i++){
        if(arr[i]>=arr[i-1] && arr[i]>=arr[i+1])
        return i;
    }
    }

int main(){
    int number;
    printf("enter how many elements you wanted in array:");
    scanf("%d",&number);
    int arr[number];
    for(int i=0;i<number;i++){
        printf("enter element at index %d of array:",i);
        scanf("%d",&arr[i]);
        }

    int n=sizeof(arr)/sizeof(arr[0]);
    printf("Index of peak element is: %d",peak_element(arr,n));
    return 0;
}
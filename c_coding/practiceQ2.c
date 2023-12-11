#include<stdio.h>
int evennumber(int arr[], int n){
    int sum=0;
    for(int i=0;i<n;i++){
        if(arr[i]/2 == 0){
            sum=+arr[i];
        }
    }
    return sum;
}
int main(){
    int n;
    printf("Enter the number of list items : \n");
    scanf("%d",&n);
    int arr[n];
    
    for(int i = 0;i < n;i++){
        printf("enter the element:");
        scanf("%d",&arr[i]);
    }
    int x=evennumber(arr,n);
    printf("Sum of all even numbers are : \n",x);
    return 0;
}

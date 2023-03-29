#include <stdio.h>
void reverse(int *arr, int n){
    int temp;
    for(int i=0;i<n/2;i++){
        temp=arr[i];
        arr[i]=arr[n-1-i];
        arr[n-1-i]=temp;
    }
}
int main(){
    int arr[]={5,7,9,4,3};
    reverse(arr,5);
    for(int i=0;i<5;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}
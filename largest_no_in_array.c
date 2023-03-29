#include <stdio.h>
int main(){
    int arr[]={10,23,56,32,4};
    int largest=arr[0];
    for(int i=0;i<5;i++){
        if(arr[i]> largest){
            largest=arr[i];
        }
    }
    printf("%d", largest);
    return 0;
}
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int num;
    scanf("%d",&num);
    arr[n]=num;
    for(int i=0;i<n+1;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
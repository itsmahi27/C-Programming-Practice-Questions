#include <stdio.h>
void print_table(int arr[][10], int n, int number){
    for(int i=0;i<10;i++){
        arr[n][i]=number*(i+1);
    }
    for(int i=0;i<10;i++){
        printf("%d ", arr[n][i]);
    }
}
int main(){
    int arr[2][10];
    // for(int i=0;i<10;i++){
    //     arr[0][i]=2*(i+1);
    // }
    // for(int i=0;i<10;i++){
    //     arr[1][i]=3*(i+1);
    // }
    // for(int i=0;i<2;i++){
    //     for(int j=0;j<10;j++){
    //         printf("%d ",arr[i][j]);
    //     }
    //     printf("\n");
    // }
    print_table(arr, 0, 2);
    printf("\n");
    print_table(arr, 0, 3);
    return 0;
}
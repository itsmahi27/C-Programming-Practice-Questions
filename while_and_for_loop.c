#include <stdio.h>
int main(){
    int n,sum=0;
    scanf("%d",&n);
    // int i=n;
    // while(i>=1){
    //     sum+=i;
    //     printf("%d\n",i);
    //     i--;
    // }
    // for(int i=1,j=n;i<=n,j>=1;i++,j--){
    //     printf("%d\n",j);
    //     sum+=i;
    // }
    // printf("%d",sum);
    // for(int i=1;i<=10;i++){
    //     printf("%d\n", n*i);
    // }
    for(int i=5;i<=50;i++){
        sum+=i;
    }
    printf("%d",sum);
    return 0;
}
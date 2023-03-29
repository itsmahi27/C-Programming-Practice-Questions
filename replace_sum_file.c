#include <stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("sum.txt","r");
    int a,b,sum;
    fscanf(fptr,"%d",&a);
    fscanf(fptr,"%d",&b);
    sum=a+b;
    fclose(fptr);
    fptr=fopen("sum.txt","w");
    fprintf(fptr,"%d",sum);
    fclose(fptr);
    return 0;
}
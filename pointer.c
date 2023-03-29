#include <stdio.h>
int main(){
    int age=30;
    int *ptr=&age;
    int **pptr=&ptr;
    printf("%d",**pptr);
    // printf("%p\n",ptr);
    // printf("%p\n",&ptr);
    // printf("%p\n",&age);
    // printf("%p\n",&*ptr);
    // printf("%d\n",*ptr);
    // printf("%d\n",age);
    return 0;
}
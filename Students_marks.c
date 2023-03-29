#include <stdio.h>
int main(){
    float marks;
    printf("Enter the Marks: ");
    scanf("%f",&marks);
    if(marks<30){
        printf("C");
    }
    else if(marks>=30 && marks <70){
        printf("B");
    }
    else if(marks>=70 && marks<90){
        printf("A");
    }
    else if(marks>=90 && marks<=100){
        printf("A+");
    }
    else{
        printf("Marks entered are invalid.");
    }
    return 0;
}
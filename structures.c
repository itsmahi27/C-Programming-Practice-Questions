#include <stdio.h>
#include <string.h>
typedef struct student {
    int roll;
    float cgpa;
    char name[100];//string using char array initialization
}stud;
void printinfo(struct student s1){
    printf("%d\n",s1.roll);
    printf("%s\n",s1.name);
    printf("%f\n",s1.cgpa);
}
int main(){
    typedef char ch;
    ch hello;
    scanf("%c",&hello);
    printf("%c\n",hello);
    stud s1={04,9.52,"Mohit Sharma"};
    // s1.roll=04;
    // s1.cgpa=9.52;
    // // s1.name="Mohit Sharma"; s1.name cant be updated because we used the array initialization.
    // strcpy(s1.name,"Mohit Sharma");
    stud *ptr;
    ptr=&s1;
    printf("%s %d %f ",s1.name,s1.roll,s1.cgpa);
    printf("%s %d %f ",(*ptr).name,(*ptr).roll,(*ptr).cgpa);
    printf("%s %d %f \n",ptr->name,ptr->roll,ptr->cgpa);//(*ptr).code <--> ptr->code
    printinfo(s1);
    
    return 0;
}
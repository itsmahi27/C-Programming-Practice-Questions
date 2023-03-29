#include <stdio.h>
int main(){
    int age;
    scanf("%d",&age);
    age>=18 ? printf("Adult\n") : printf("Not Adult\n");
    char day;
    scanf("%s",&day);
    switch(day){
        case 'm': printf("Monday");
                break;
        case 't': printf("Tuesday");
                break;
        case 'w': printf("Wednesday");
                break;
        case 'T': printf("Thursday");
                break;
        case 'f': printf("Friday");
                break;
        case 's': printf("Saturday");
                break;
        case 'S': printf("Sunday");
                break;
        default: printf("Invalid Day");
    }
    return 0;
}
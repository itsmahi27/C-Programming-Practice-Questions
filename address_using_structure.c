#include <stdio.h>
typedef struct address{
    int house_no;
    int block_no;
    char city[100];
    char state[100];
}add;
void print_add(add s1){
    printf("%d %d %s %s\n",s1.house_no,s1.block_no,s1.city,s1.state);
}
int main(){
    add people[5];
    printf("Enter the address of person 1\n");
    scanf("%d %d %s %s",&people[0].house_no,&people[0].block_no,people[0].city,people[0].state);
    printf("Enter the address of person 2\n");
    scanf("%d %d %s %s",&people[1].house_no,&people[1].block_no,people[1].city,people[1].state);
    printf("Enter the address of person 3\n");
    scanf("%d %d %s %s",&people[2].house_no,&people[2].block_no,people[2].city,people[2].state);
    print_add(people[0]);
    print_add(people[1]);
    print_add(people[2]);
    return 0;
}
#include <stdio.h>
typedef struct vector{
    int x;
    int y;
} vec;
void vector_sum(vec v1,vec v2, vec *ptr){
    ptr->x=v1.x+v2.x;
    ptr->y=v1.y+v2.y;
}
int main(){
    vec v1={7,11};
    vec v2={6,15};
    vec sum={0};
    vec *ptr;
    ptr=&sum;
    vector_sum(v1,v2,ptr);
    printf("%d ",sum.x);
    printf("%d",sum.y);
    return 0;
}
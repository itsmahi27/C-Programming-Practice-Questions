#include <stdio.h>
void print_array(char arr[]){
    for(int i=0;arr[i]!='\0';i++){
        printf("%c",arr[i]);
    }
}
int main(){
    char firstname[10],lastname[10];
    scanf("%s",firstname);
    scanf("%s",lastname);
    print_array(firstname);//using fn print char by char
    printf("\n");
    print_array(lastname);
    printf("\n%s",firstname);//using string format specifier print
    printf("\n%s",lastname);
    //input character by character
    char str[100];
    char c;
    int i=0;
    while(c!='\n'){
        scanf("%c",&c);
        str[i]=c;
        i++;
    }
    str[i]='\0';
    printf("%s",str);
    return 0;
} 
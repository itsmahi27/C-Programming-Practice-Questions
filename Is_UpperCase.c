#include <stdio.h>
int main(){
    char input;
    scanf("%c", &input);
    if(input >= 'A' && input <='Z'){
        printf("Upper Case");
    }
    else if(input>='a' && input<='z'){
        printf("Lower Case");
    }
    else{
        printf("Not Valid English Alphabet");
    }
    return 0;
}
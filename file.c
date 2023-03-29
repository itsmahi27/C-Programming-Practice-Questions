#include <stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("test.txt", "r");
    // fptr = fopen("test.txt", "rb");
    // fptr = fopen("test.txt", "w");
    // fptr = fopen("test.txt", "wb");
    // fptr = fopen("test.txt", "a");
    if(fptr == NULL){
        printf("File does not exists.");
    }
    else{
        char ch;
        // fscanf(fptr,"%c",&ch);
        // printf("%c",ch);
        // fscanf(fptr,"%c",&ch);
        // printf("%c",ch);
        // fscanf(fptr,"%c",&ch);
        // printf("%c",ch);
        // fscanf(fptr,"%c",&ch);
        // printf("%c",ch);
        // fscanf(fptr,"%c",&ch);
        // printf("%c",ch);

        // fprintf(fptr,"%c",'M');
        // fprintf(fptr,"%c",'A');
        // fprintf(fptr,"%c",'N');
        // fprintf(fptr,"%c",'G');
        // fprintf(fptr,"%c",'O');

        // fputc('Z',fptr);
        // ch = fgetc(fptr);
        // printf("%c",ch);
        ch=fgetc(fptr);
        while(ch!=EOF){
            printf("%c",ch);
            ch=fgetc(fptr);
        }
        fclose(fptr);
    }
    return 0;
}
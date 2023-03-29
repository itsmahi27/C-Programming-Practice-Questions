#include <stdio.h>
int main(){
    FILE *fptr;
    char ch;
    int count=0;
    fptr=fopen("string_count.txt","r");
    ch=fgetc(fptr);
    while(ch!=EOF){
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
            count++;
        }
        ch=fgetc(fptr);
    }
    fclose(fptr);
    fptr=fopen("string_count.txt","a");
    fprintf(fptr,"\nVowels Count- %d\n",count);
    fclose(fptr);
    return 0;
}
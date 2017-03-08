#include<stdio.h>
#include<conio.h>


int main(){

    FILE *fpointer;
    fpointer = fopen("nirmal.txt","r");

    char ch;

    feof(fpointer); // gives true if we reached end of file

    if (fpointer == NULL){
        printf("Unable to create file ");
    }else{
        printf("File opened successfully\n\n");
        while(!feof(fpointer)){
            ch = fgetc(fpointer);
            printf("%c\n", ch);
        }
        fclose(fpointer);
    }
}

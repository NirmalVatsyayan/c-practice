#include<stdio.h>
#include<conio.h>

/*

fputc - writes a character to file

fputc(character, file pointer)

*/

int main(){
    char data[25] = "Nirmal Vatsyayan";
    int length = strlen(data);
    int counter;

    printf("Length of string to be written -> %d\n\n", length);

    FILE *fpointer;
    fpointer = fopen("nirmal_fputc.txt","w");

    if (fpointer == NULL){
        printf("Unable to create file ");
    }else{
        printf("File opened successfully\n\n");
        for(counter=0; counter<length; counter++){
            fputc(data[counter], fpointer);
        }
        printf("Done writing");
        fclose(fpointer);
    }

}

#include<stdio.h>
#include<conio.h>

/*
write formatted data to file
*/

int main(){
    FILE *fpointer;
    fpointer = fopen("nirmal_fputc.txt","w");

    char name[50] = "Nirmal Vatsyayan";
    int age = 27;

    if (fpointer == NULL){
        printf("Unable to create file ");
    }else{
        printf("File opened successfully\n\n");
        fprintf(fpointer, "%s\t%d", name, age);
        printf("Data written successfully");
        fclose(fpointer);
    }

}

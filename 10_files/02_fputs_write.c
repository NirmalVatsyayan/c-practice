#include<stdio.h>
#include<conio.h>

/*
fputs - writes string to file
*/

int main(){
    char data[25] = "Nirmal Vatsyayan";
    FILE *fpointer;
    fpointer = fopen("nirmal.txt","w");

    if (fpointer == NULL){
        printf("Unable to create file ");
    }else{
        printf("File opened successfully\n\n");
        fputs(data, fpointer);
        printf("Data written successfully");
        fclose(fpointer);
    }

}

#include<stdio.h>
#include<conio.h>

int main(){
    char data[100];

    FILE *fpointer;
    fpointer = fopen("nirmal.txt","r");

    if (fpointer == NULL){
        printf("Unable to create file ");
    }else{
        printf("File opened successfully\n\n");
        fscanf(fpointer, "%s", data);
        printf("%s\n\n",data);
        fclose(fpointer);
    }

}

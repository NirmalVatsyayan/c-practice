#include<stdio.h>
#include<conio.h>

int main(){
    char data[5];

    FILE *fpointer;
    fpointer = fopen("nirmal.txt","r");

    if (fpointer == NULL){
        printf("Unable to create file ");
    }else{
        printf("File opened successfully\n\n");
        while(!feof(fpointer)){
            fgets(data, 5, fpointer);
            printf("%s\n\n",data);
        }

        fclose(fpointer);
    }

}

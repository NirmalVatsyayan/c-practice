#include<stdio.h>
#include<conio.h>

int main(){

    FILE *fp;

    fp = fopen("example.txt","r");
    if (fp != NULL){
        while(!feof(fp)){
            putchar(fgetc(fp));
        }

        printf("\n");
        rewind(fp);

        while(!feof(fp)){
            putchar(fgetc(fp));
        }

    }else{
       puts("Error in opening file !!");
    }
}

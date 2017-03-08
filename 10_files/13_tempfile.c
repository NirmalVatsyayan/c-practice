#include<stdio.h>
#include<conio.h>

int main(){

    char data[100] = "Nirmal Vatsyayan";
    int data_len = strlen(data);
    int count=-1;

    FILE *fp;
    fp = tmpfile();

    if (fp != NULL){
        puts("tmpfile created !!");
        while(++count<data_len){
            fputc(data[count], fp);
        }

        rewind(fp);

        while(!feof(fp)){
            putchar(fgetc(fp));
        }

    }else{
        puts("unable to create tmpfile!!");
    }

}

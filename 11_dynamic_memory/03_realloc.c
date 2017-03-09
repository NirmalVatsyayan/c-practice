#include<stdio.h>
#include<conio.h>

#include<stdlib.h>

int main(){

    char *str;
    str = (char *)malloc(7);
    if (str == NULL){
        puts("Unable to allocate memory !!");
    }else{
        strcpy(str, "Nirmal");
        puts(str);

        str = (char *)realloc(str, 16);
        strcat(str, " Vatsyayan");
        puts(str);
        free(str);
    }

}

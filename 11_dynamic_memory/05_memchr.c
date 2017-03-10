#include<stdio.h>
#include<conio.h>

int main(){

    char *p;
    char data[]= "Nirmal Vatsyayan";
    char search='V';

    //search for a char in given string
    p = (char *)memchr(data, search, strlen(data));

    if (p != NULL){
        puts(p);
    }
}

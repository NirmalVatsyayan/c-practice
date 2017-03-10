#include<stdio.h>
#include<conio.h>

int main(){
    int size = 20;
    char from[size], to[size];

    strcpy(from, "Nirmal Vatsyayan");
    memcpy(to, from, size);
    printf(to);


}

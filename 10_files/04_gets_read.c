#include<stdio.h>
#include<conio.h>

/*
scanf fails when space or tab is in input
in those cases we should use gets
*/

int main(){
    char data[20];

    gets(data);
    printf("%s", data);

}

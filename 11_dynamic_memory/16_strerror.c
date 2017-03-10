#include<stdio.h>
#include<conio.h>

int main(){
    char ch[]="\n";

    printf(strerror(0));
    puts(ch);
    printf(strerror(1));
    puts(ch);
    printf(strerror(2));
    puts(ch);
    printf(strerror(3));
    puts(ch);
    printf(strerror(4));

}

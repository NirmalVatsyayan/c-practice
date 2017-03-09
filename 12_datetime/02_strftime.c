#include<stdio.h>
#include<conio.h>

#include<time.h>

int main(){

    struct tm *ptr;
    time_t t;

    char str[100];

    t = time(NULL);
    ptr = localtime(&t); // gmtime for UTC

    strftime(str, 100, "It is now %I %p %M minutes %S seconds \n zone is %Z", ptr);
    puts(str);
}

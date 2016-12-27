#include<stdio.h>
#include<conio.h>

/*
printf gives number of characters printed by it
int i = printf("Hello") will give 5

scanf returns number of characters read by it

The getchar() function reads a character from the terminal
and returns it as an integer. This function reads only single
character at a time. You can use this method in the loop in
case you want to read more than one characters.

The putchar() function prints the character passed to it
on the screen and returns the same character.
This function puts only single character at a time.

The gets() function reads a line from stdin
into the buffer pointed to by s until either a
terminating newline or EOF (end of file).

The puts() function writes the string s and a trailing newline to stdout.


DIFF scanf and gets:
    scanf() stops reading characters when it encounters a space, but gets() reads space as character too.
*/

int main(){
    int i;
    int c;
    char str[500];
    printf("Enter a number : ");
    scanf("%d",&i);
    printf("You entered -> %d",i);

    printf("\n\n");
    printf("Enter a character : ");
    fflush(stdin);
    c = getchar();
    putchar(c);


    printf("\n\n");
    printf("Enter a string : ");
    fflush(stdin);
    gets(str);
    puts(str);
    getch();

}

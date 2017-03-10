#include<stdio.h>
#include<conio.h>

#include<ctype.h>

int main(){

    char ch = 'N';

    char c = '\n';

    if(isalpha(ch)){
        printf("%c is an alphabet\n", ch);
    }

    if(isdigit(ch)){
        printf("%d is a digit\n",ch);
    }

    if(isalnum(ch)){
        printf("%c is a alphanumeric\n",ch);
    }

    if(isprint(ch)){
        printf("%c is a printable character\n",ch);
    }

    if(iscntrl(c)){
        printf("%c is a control character\n",c);
    }

    if(islower(ch)){
        printf("%c is in lower case\n",ch);
    }

    if(isupper(ch)){
        printf("%c is in upper case\n",ch);
    }

    if(ispunct(ch)){
        printf("%c is a punctuation character\n",ch);
    }

    if(isspace(ch)){
        printf("%c is a whitespace character\n",ch);
    }

    printf("%c is upper case character of %c\n",toupper(ch), ch);
    printf("%c is lower case character of %c\n",tolower(ch), ch);

}

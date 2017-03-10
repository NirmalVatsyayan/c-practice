#include<stdio.h>
#include<conio.h>

#include<locale.h>

int main(){

        struct lconv *lc;
        lc = localeconv();
        printf("%s", lc->decimal_point);

}

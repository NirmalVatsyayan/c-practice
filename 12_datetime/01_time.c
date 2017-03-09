#include<stdio.h>
#include<conio.h>

#include<time.h>

int main(){

    struct tm *local, *gm;
    time_t t;

    t = time(NULL);

    local = localtime(&t);
    printf("Localtime using localtime function\n");
    printf("time ---> %d : %d : %d\n", local->tm_hour, local->tm_min, local->tm_sec);
    printf("time ---> %d / %d / %d\n", local->tm_year+1900, local->tm_mon+1, local->tm_mday);
    printf("this is a %d day of year\n", local->tm_yday+1);
    printf("this is a %d day of this week\n", local->tm_wday+1);


    gm = gmtime(&t);
    printf("Localtime using gmtime (UTC) function\n");
    printf("time ---> %d : %d : %d\n", gm->tm_hour, gm->tm_min, gm->tm_sec);
    printf("time ---> %d / %d / %d\n", gm->tm_year+1900, gm->tm_mon+1, gm->tm_mday);
    printf("this is a %d day of year\n", gm->tm_yday+1);
    printf("this is a %d day of this week", gm->tm_wday+1);

}

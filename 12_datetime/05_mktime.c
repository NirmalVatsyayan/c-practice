#include<stdio.h>
#include<conio.h>

#include<time.h>

int main(){

   struct tm t;
   time_t timeinc;

   t.tm_year = 2017-1900;
   t.tm_mon = 2;
   t.tm_mday = 10;

   t.tm_hour = 0;
   t.tm_min = 3;
   t.tm_sec = 0;
   t.tm_isdst = 0;

   timeinc = mktime(&t);
   puts(ctime(&timeinc));

}

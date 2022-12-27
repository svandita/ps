#include<stdio.h>
int main()
{
    int date;
    printf("enter the date in dd/mm/yyyy");
    scanf("%d",& date);
    if((year%4==0)&&(year%400==0)||(year%100==0))
       printf("leap year");
    else
        printf("not a leap year");

}


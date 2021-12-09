#include <stdio.h>
int main()
{
    int year;
    printf("enter a year to be checked \n");
    scanf("%d", &year);
    int check, a_check;
    check = year / 100;
    a_check = year % 4;
    if (check % 2 == 0 && a_check == 0)
        printf("it is leap year and the year is %d \n", year);
    else
        printf("it is not a leap year and the year is %d \n ", year);
    return 0;
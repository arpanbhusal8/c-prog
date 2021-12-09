#include <stdio.h>
typedef struct date
{
    int day;
    int month;
    int year;
} date;
int compare(date a[2])
{
       if (a[0].year > a[1].year)
        {
            return 1;
        }
        else if(a[1].year>a[0].year)
        {
            return -1;
        }
        if (a[0].month > a[1].month)
        {
            return 1;
        }
        else if(a[1].month>a[0].month)
        {
            return -1;
        }
        if (a[0].day > a[1].day)
        {
            return 1;
        }
        else if(a[1].day>a[0].day)
        {
            return -1;
        }
    
    
    return 0;
}
int main()
{
    date a[2];
    for (int i = 0; i < 2; i++)
    {
        printf("enter the day \n");
            scanf("%d", &a[i].day);
            printf("enter the month \n");
            scanf("%d", &a[i].month);
            printf("enter the year \n");
            scanf("%d", &a[i].year);
        }
        for (int i = 0; i < 2; i++)
        {
            printf("date is %d/%d/%d \n", a[i].day, a[i].month, a[i].year);
        }
        compare(a);
        printf("%d\n", compare(a));
        return 0;
    }

  
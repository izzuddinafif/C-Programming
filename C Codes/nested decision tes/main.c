#include <stdio.h>
#include <stdlib.h>
void printdate(int xdate)
{
    printf("%d is a leap year", xdate);
};
void printdatex(int ydate)
{
    printf("%d is not a leap year", ydate);
};
int main()
{
    int date;

    printf("input a date= ");
    scanf("%d", &date);

    if(date%4==0)
    {
        if(date%100==0)
        {
            if(date%400==0)
                printdate(date);
            else
                printdatex(date);
        }
        else
            printdate(date);
    }
    else
        printdatex(date);
    return 0;
}

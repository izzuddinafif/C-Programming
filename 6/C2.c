#include<stdio.h>
int main(void)
{
    int i, j;
    for(i=1; i<=4; i++)
    {
        for (j=1; j<=7; j++)
        {
            if((i==1 || i==2) && (j==1 || j==2 || j==3))
            printf("* ");
            else
            printf("_ ");
        }
        printf("\n");
    }  
}
#include<stdio.h>
#define MAX 11
int main(void)
{
    int i, j;
    char s[MAX]="POLITEKNIK";
    for(i=9; i>=0; --i)
    {
        for(j=0; j<=i; ++j)
        {
            printf("%c", s[j]);
        }
        printf("\n");
    }
}
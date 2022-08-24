#include <stdio.h>
#include <string.h>

int main(void)
{
    int c;
    char s[30], x[30];
    puts("Program perbandingan string");
    printf("Insert string 1: ");
    gets(s);
    printf("Insert string 2: ");
    gets(x);
    c=strcmp(s, x);
    if(c==0)
    printf("Kedua string sama (%d)", c);
    else
    printf("Kedua string tidak sama (%d)", c);   
}
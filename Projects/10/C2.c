#include <stdio.h>
#include <string.h>

int main(void)
{
    int i=0, j=0, n;
    char s[30], x[30];
    printf("Input string dalam uppercase: ");
    gets(s);
    n=strlen(s);
    for(i; i<=n; ++i)
    s[i]+=32;
    printf("String dalam lowercase: %s\n", s);
    for(n; n>=0;--n)
    {
        x[j]=s[n];
        ++j;
    }
    printf("String dibalik: %s", x);   
}
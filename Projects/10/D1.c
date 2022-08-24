#include <stdio.h>
#include <string.h>

int main(void)
{
    int j=0, n, c;
    char s[100], x[100];
    puts("Program cek palindrom");
    printf("Input string: ");
    gets(s);
    n=strlen(s);
    for(n+1; n>=0;--n)
    {
        x[j]=s[n-1];
        ++j;
    }
    c=strcmp(s, x);
    if(c==0)
    printf("String \"%s\" Termasuk Palindrom", s);
    else
    printf("String \"%s\" Bukanlah Palindrom", s);  
}
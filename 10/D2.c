#include <stdio.h>
#include <string.h>

int main(void)
{
    int i, n;
    char s[30];
    puts("Program untuk mengubah a menjadi i");
    printf("Insert string: ");
    gets(s);
    n=strlen(s);
    for(i=0; i<=n; ++i)
    {
        if(s[i]=='a')
        s[i]='i';
    }
    printf("%s", s);   
}
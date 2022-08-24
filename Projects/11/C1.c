#include<stdio.h>
int main(void)
{
    char *ps="Halo apa kabar";
    while(*ps!='\0')
    {
        printf("%c", *ps);
        ++ps;
    }
}
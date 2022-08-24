#include<stdio.h>
#include<string.h>
int main(void)
{
    int i;
    char *ps="TELEKOMUNIKASI";
    while(*ps != NULL)
    {
        if(*ps=='L')
        {
            printf("%c", *ps);
            ++ps;
        }
        else
        ++ps;
    }
}
#include <stdio.h>
#include <string.h>

int main(void)
{
    int i=0;
    char s[20];
    puts("Program untuk mencari panjang string");
    printf("Masukkan string: ");
    gets(s);
    //printf("Jadi panjang stringnya adalah %d", strlen(s));
    while(s[i]!='\0')
    ++i;
    printf("jadi panjang stringnya adalah %d", i);
}
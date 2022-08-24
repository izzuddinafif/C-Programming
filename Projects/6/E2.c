#include<stdio.h>
int main(void)
{
    int i=1, n, p=2, x=0;

    puts("program untuk mentotal bilangan prima");
    printf("masukkan nilai n: ");
    scanf("%d", &n);
    puts("");
    do
    {
        if(p==2 || p==3 || p==5 || p==7)
        {
        printf("bilangan prima ke-%d : %d\n", i, p);
        x+=p;
        p++;
        i++;
        continue;
        }
        else 
        {
        if (p%2==0)
        {
        p++;
        continue;
        }
        if (p%3==0)
        {
        p++;
        continue;
        }
        if (p%5==0)
        {
        p++;
        continue;
        }
        if (p%7==0)
        {
        p++;
        continue;
        }
        else
        {
        printf("bilangan prima ke-%d : %d\n", i, p);
        x+=p;
        p++;
        i++;
        }
        }
    } while (i<=n);
    printf("\ntotal %d bilangan prima pertama: %d", n, x);
    
}
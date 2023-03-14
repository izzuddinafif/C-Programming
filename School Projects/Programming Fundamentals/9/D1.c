#include<stdio.h>
#define MAX 30
void count(char a[MAX], char b[MAX]);
char kar[MAX], temp[MAX];
int i, j=0, k, n, x, c[MAX];
int main(void)
{
    printf("Masukkan jumlah karakter yang akan dihitung: ");
    scanf("%d", &n);
    fflush(stdin);
    for(i=0; i<n; ++i)
    {
        printf("Masukkan karakter ke-%d: ", i+1);
        scanf("%c", &kar[i]);
        if(temp[j]!=kar[i])
        {
            for(x=0; x<=j; ++x)
            {
                if(kar[i]==temp[x])
                goto hehe;
            }
            temp[j+1]=kar[i];
            ++j;
        }
        hehe:
        fflush(stdin);
        puts("");
    }
    puts("\n");
    count(temp, kar);
    for(i=1; i<=j; ++i)
    printf("Frekuensi %c=%d\n",temp[i], c[i]);
}
void count(char a[MAX], char b[MAX])
{
    for(i=1; i<=j; ++i)
    {   
    for(k=0; k<n; ++k)
        {
        if(a[i]==b[k])
        ++c[i];
        }
    }
}
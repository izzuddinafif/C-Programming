#include <stdio.h>
#include <string.h>
#define MAX 10

int main(void)
{
    int i, j, c, n, k;
    char s[MAX][40], temp[MAX][40];
    puts("Program pengurutan daftar nama");
    printf("Inputkan jumlah nama (maksimal 10 nama): ");
    scanf("%d", &n);
    fflush(stdin);
    for(i=0; i<n; ++i)
    {
        printf("Inputkan nama: ");
        gets(s[i]);
        fflush(stdin);
    }
    puts("");
    for(i=0; i<n-1; ++i)
    {
        for(j=i+1; j<n; ++j)
        {
            c=strcmp(s[i], s[j]);
            if(c==1)
            {
                for(k=0; k<40; ++k)
                {
                temp[i][k] = s[j][k];
                s[j][k] = s[i][k];
                s[i][k] = temp[i][k];
                }
            }
        }
    }
    for(i=0; i<n; ++i)
    {
        printf("Nama ke-%d: %s\n", i+1, s[i]);
    }
}
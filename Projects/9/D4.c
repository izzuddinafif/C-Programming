#include <stdio.h>
#define MAX 5

int main(void)
{
    int bil[MAX], i, j, temp;
    for(i = 0; i < MAX; i++)
    {
        printf("Inputkan bilangan ke-%d: ", i+1);
        scanf("%d", &bil[i]);
    }
    for(i = 0; i < MAX-1; i++)
    {
        for(j = i+1; j < MAX; j++)
        {
            if(bil[j]>bil[i])
            {
                temp = bil[i];
                bil[i] = bil[j];
                bil[j] = temp;
            }
        }
    }
    printf("\nOutput: \n");
    for(i = 0; i < MAX; i++)
    printf("%d\n", bil[i]);
}
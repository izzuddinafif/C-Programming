#include<stdio.h>
int main(void)
{
    int matrix1[2][2]={
        {1,2}, {3,4}
    },
    matrix2[2][2]={
        {2,3}, {4,5}
    }, i, j;

    for(i=0; i<2; ++i)
    {
        for(j=0; j<2; ++j)
        {
        matrix1[i][j]+=matrix2[i][j];
        printf("%d ", matrix1[i][j]);
        }
        puts("");
    }
}

#include <stdio.h>
struct book{
    char judul[30];
    int jumlah, harga;
}buku[2];
int main (void)
{
    for(int i=0; i<2; ++i)
    {
        printf("Judul buku: %s", fgets(buku[i].judul, sizeof buku[i].judul, stdin));
        //scanf("%s", buku[i].judul);
        printf("jumlah:");
        scanf("%d", &buku[i].jumlah);
        printf("harga satuan ");
        scanf("%d", &buku[i].harga);
        fflush(stdin);
    }
}
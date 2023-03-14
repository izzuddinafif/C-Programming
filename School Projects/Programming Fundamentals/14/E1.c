#include <stdio.h>
struct book{
    char judul[30];
    int jumlah, harga;
}buku[2];
void haha(void)
{
    for(int i=0; i<2; ++i)
    {
        printf("Judul buku: ");
        scanf("%s", buku[i].judul);
        printf("jumlah:");
        scanf("%d", &buku[i].jumlah);
        printf("harga satuan ");
        scanf("%d", &buku[i].harga);
        fflush(stdin);
    }
}
int main (void)
{
    haha();
}
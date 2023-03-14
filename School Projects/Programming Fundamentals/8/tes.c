#include <stdio.h>
void fung_y(void);
main()
{
int y = 20;
fung_y();
fung_y();
printf("Nilai y dalam main() = %d\n", y);
}
void fung_y(void)
{
static int y;
y++;
printf("Nilai y dalam fung_y() = %d\n", y);
}
#include <stdio.h>
#include <stdlib.h>
int main (void)
{
    int a=1,h;
    printf ("harga fotokopyan\n\n");
    printf ("jumlah lembar\t\| harga\t\n");
    while (a<=100)
    {
        h = a*95;
        printf ("-------------------------_\n");
        printf ("%d lembar =\t|Rp%d\n",a,h);
        a++;
    }
    printf("\n");
    system("pause");
    return 0;
}

#include <stdio.h>
void main ()
{
    int i,a[5];
    printf("nhap 5 so  ");
    for (i=0;i<5;i++)
    {
        printf("\na[%d]:",i);
         scanf ("%d",&a[i]);
    }
    printf("\n Day so:  ");
     for (i=0;i<5;i++)
        printf("%5d",a[i]);
    printf("\n");
}

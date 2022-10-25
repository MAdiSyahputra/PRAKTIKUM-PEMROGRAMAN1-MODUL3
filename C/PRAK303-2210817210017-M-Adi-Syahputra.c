#include <stdio.h>

int main()
{
    int n;
printf("Nilai N : ");
scanf("%d", &n);

if(n>0)
{
printf("\nNilai N adalah positif\n");
}

else if(n<0)
{
printf("\nNilai N adalah negatif\n");
}

else
{
printf("\nNilai N adalah nol\n");
}
}
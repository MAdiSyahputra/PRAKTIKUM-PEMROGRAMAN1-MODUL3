#include <stdio.h>

int main()
{
    int n;
printf("Inputkan bilangan cacah dari 1-99 : ");
scanf("%d", &n);

if(n>99)
{
   printf("\nAnda menginput melebihi limit bilangan");
}

else if(n>=20 && n<=99)
{
    printf("\nNilai %d yang anda inputkan merupakan bilangan puluhan", n);
}

else if(n>=11 && n<=19)
{
    printf("\nNilai %d yang anda inputkan merupakan bilangan belasan", n);
}

else if(n>=1 && n<=9)
{
    printf("\nNilai %d yang anda inputkan merupakan bilangan satuan", n);
}

else
{
    printf("\nNilai %d yang anda inputkan merupakan bilangan nol", n);
}
}
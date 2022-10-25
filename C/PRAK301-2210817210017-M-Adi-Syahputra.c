#include <stdio.h>

int main()
{
    int i,j,a,n, number[30];
    n=3;

printf("Inputkan 3 angka :\n");
   for(i=0; i<n; ++i)
scanf("%d", &number[i]);

   for(i=0; i<n; ++i)
{
   for(j=i; j<n; ++j) 
{
   if(number[i]>number[j])
{
    a=number[i];
    number[i]=number[j];
    number[j]=a;
}
}
}

printf("\n3 angka dari yang terkecil ke terbesar adalah : \n");
   for(i=0; i<n; ++i)
printf("%d\n", number[i]);
}
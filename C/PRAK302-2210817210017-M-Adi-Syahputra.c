#include <stdio.h>

int main()
{
    int nilai;
printf("Masukkan nilai siswa : ");
scanf("%d", &nilai);

if(nilai>=80) 
{
printf("\nNilai siswa adalah =A\n");
}

else if(nilai>=70 && nilai<=79)
{
printf("\nNilai siswa adalah =B\n");
}

else if(nilai>=60 && nilai<=69)
{
printf("\nNilai siswa adalah =C\n");
}

else if(nilai>=50 && nilai<=59)
{
printf("\nNilai siswa adalah =D\n");
}

else 
{
printf("\nNilai siswa adalah =E\n");
}
}
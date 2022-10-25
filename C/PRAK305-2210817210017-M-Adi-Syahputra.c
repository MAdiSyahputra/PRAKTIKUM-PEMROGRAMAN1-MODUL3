#include <stdio.h>
int main() {
    int sec,d,h,m,s;

    printf("Total seconds : ");
    scanf("%d", &sec);

s=(sec % 60);
m=(sec % 3600) / 60;
h=(sec % 86400) / 3600;
d=(sec % (86400 * 30) / 86400;
    
    printf("D:H:M:S - %d:%d:%d:%d\n",d,h,m,s);

    return 0;
}
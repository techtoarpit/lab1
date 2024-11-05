#include<stdio.h>
int main()
{
    int x;
    printf("enter the number:");
    scanf("%d",&x);
    int y = x%100;
    int z = y%10;
    x=x-y;
    x=x/100;
    y=y-z;
    y=y/10;
    printf("%d,%d,%d\n",x,y,z);
    int w = z*100+y*10+x;
    printf("%d",w);
    return 0;
}
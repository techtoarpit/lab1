#include<stdio.h>
int main()
{
    int n,sum=0,digit;
    printf("enter a no. n");
    scanf("%d",&n);
    while(n!=0)
    {
        digit=n%10;
        sum+=digit;
        n /=10;
    

    }
    printf("the sum of digits is=%d",sum);
}
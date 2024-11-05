#include<stdio.h>
int main()
{
    int n,r=0,d;
    printf("enter a no. n");
    scanf("%d",&n);
    int m=n;
    while(n!=0)
    {
        d=n%10;
        r=r*10+d;
        n=n/10;
    }
    if(m==r)
    {
        printf("given no. is palindrome=%d",m);
    }
    else
    {
    printf("given no. is not palindrome=%d",m);
    }
return 0;

}


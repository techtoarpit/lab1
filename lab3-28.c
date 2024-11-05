#include<stdio.h>
int main()
{
    int x,y,z;
    printf("Enter a no. xyz\n");
    scanf("%d,%d,%d",&x,&y,&z);
    int a,b;
    a = x*100+y*10+z;
    b=(x*x*x)+(y*y*y)+(z*z*z); 
    if(a=b)
    {
        printf("no. is armstrong");
    }
    else
    {
        printf("no. is not armstrong");

    }
    
    
}
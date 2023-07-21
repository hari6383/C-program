#include <stdio.h>

int fibo(int n)
{

    if(n==0)
        return 0;
    if(n==1)
        return 1;
    else
        return fibo(n-1)+fibo(n-2);
}

void main()
{
    int t,i,f=0,ret;
    printf("Enter the Number");
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        ret=fibo(i);
        printf("%d",ret);
    }
}

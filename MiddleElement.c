#include <stdio.h>

int main()
{
    int n;
    Scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    if(n%2==0)
    {
        printf("%d",n/2+1);
    }
    else
    {
        printf(n/2+1);
    }
}

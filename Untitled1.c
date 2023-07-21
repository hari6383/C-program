#include<stdio.h>
int main()
{
    int i,n,j,target,num[100];
    scanf("%d",&target);
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
            if(num[i]+num[j]==target)
            {
                printf("Pair found(%d,%d)\n",num[i],num[j]);
            }
            else
            {
                printf("Pair not found");
            }
    }
    return 0;
    }

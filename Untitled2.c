#include<stdio.h>
int main()
{
    int i,n,j;
    int arr[100];
    scanf("%d",&n);
    for(i=0;i<sizeof(n);i++)
    {
        for(j=i+1;j<sizeof(n);j++)
        {
            if(arr[i] == arr[j])
            {
                printf("%d", arr[i]);
            }
        }
    }
return 0;
}

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
     int n,a;
     scanf("%d",&n);
     int arr[n];
     for(int i=0;i<n;i++)
     {
        scanf("%d",&arr[i]);
     }

      for(int i=0;i<n;i++)
     {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                a=arr[j];
                arr[i]=arr[j];
                arr[j]=a;
                //printf("%d\n",arr1[0]);
            }
        }
     }

     for(int i=0;i<n;i++)
     {
        printf("%d\n",arr[i]);
     }



    return 0;
}

#include <stdio.h>
int main()
{
int x;
for(;;)
{
x++;
if(x == 10)
break;
}
printf("%d", x);
return 0;
}

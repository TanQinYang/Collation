#include <stdio.h>
#include <stdlib.h>

int main()
{
int data[5]={-1,-2,-3,6,7};
int selected[5];
int n,i,a;
n=0;
for(i=0;i<5;i++)
{
    if (data[i]>0)
{
    selected[n]=data[i];
 //   printf("%d\n",selected[n]);
    n=n+1;
}
}
for(a=0;a<n;a++)
    printf("%d\n",selected[a]);
printf("The number of positive integers:%d",n);
    return 0;
}

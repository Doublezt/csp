#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int n,i,x;
    int a[10001],t=-1,max;
 
    scanf("%d",&n);
 
    for(i=0;i<10001;i++)
        a[i]=0;
 
    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
       a[x]++;
    }
 
    for(i=0;i<10001;i++)
    {
        if(a[i]>t)
        {
            t=a[i];
            max=i;
        }
    }
 
    printf("%d\n",max);
 
    return 0;
}
#include <stdio.h>
#include <math.h>

int main()
{
    int n,t,a[1002],b[1002];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(int i=0;i<n-1;i++)
        b[i]=fabs(a[i+1]-a[i]) ;
    for(int i=0;i<n-2;i++)
    {
        if(b[i]>=b[i+1])
        {
           t=b[i];
           b[i]=b[i+1];
           b[i+1]=t;
        }
    }
    printf("%d",b[n-2]);
    return 0;
}

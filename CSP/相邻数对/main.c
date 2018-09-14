#include<stdio.h>
#include<math.h>
int main()
{
    int n,a[1001];
    int i,j,sum;
    sum=0;
    scanf("%d",&n);
    for( i=0; i<n; i++)
        scanf("%d",&a[i]);
    for(j=0; j<n-1; j++)
        for(i=j; i<n-1; i++)
            if(fabs(a[j]-a[i+1])==1)
                sum=sum+1;
    printf("%d",sum);
    return 0;
}

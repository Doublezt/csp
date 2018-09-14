#include<stdio.h>
int main()
{
    int n,sum,a[1002];
    sum=1;
    scanf("%d",&n);
    for(int i; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    for(int i; i<n-1; i++)
    {
        if(a[i]!=a[i+1])
            sum=sum+1;
    }
    printf("%d",sum);
    return 0;

}

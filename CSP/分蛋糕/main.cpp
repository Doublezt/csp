#include <stdio.h>
int main()
{
    int sum=0;
    int counter=0;
    int n,k;
    int a[1005];
    scanf("%d %d",&n,&k);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=1;i<=n;i++ )
    {
        if(sum>=k)
        {
            sum=0;
            counter++;
        }
        sum+=a[i];
    }
    if(sum>0)
    {
        counter++;
    }
    printf("%d",counter);
    return 0;
}

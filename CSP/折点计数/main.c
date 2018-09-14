#include <stdio.h>
int main()
{
    int i,n,sum,a[1001];
    sum=0;
    scanf("%d",&n);
    for( i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    if(i==1)
        printf("1");
    if(i==2)
        printf("0");
    if(i>2)
    {
        for(int j=1; j<i-1; j++)
        {
            if(((a[j]<a[j-1])&&a[j]<a[j+1])||((a[j]>a[j-1])&&a[j]>a[j+1]))

                sum=sum+1;
        }

        printf("%d",sum);


    }
    return 0;
}

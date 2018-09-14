#include <stdio.h>
int main()
{
    int i, j,temp;
    int n,a[1009];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for (j = 0; j < n - 1; j++)
        for (i = 0; i < n - 1 - j; i++)
        {
            if(a[i] > a[i + 1])
            {
                temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
    if(((n%2)==0&&(a[n/2-1])!=a[n/2])&&n!=1)
        printf("-1");
    if((n%2==0)&&(a[n/2-1])==a[n/2])
    printf("%d",a[n/2-1]);
    if((n%2)!=0)
        printf("%d",a[(n-1)/2]);
    return 0;
}

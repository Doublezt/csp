#include<stdio.h>
int main()
{
    int i,t,n,m,k;

    scanf("%d",&n);
    k=n;
    int a[n],b[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

      for(m=0;m<n-1;m++)
      {

    for(i=0;i<n-m-1;i++)
    {
        if(a[i+1]<=a[i])
        {
        t=a[i+1];
        a[i+1]=a[i];
        a[i]=t;
        }
    }
      }
      for(i=0;i<k;i++)

        for(i=0;i<k-1;i++)
        {
            b[i]=a[i+1]-a[i];

        }

for(i=0;i<k-2;i++)
{
    if(b[i]<=b[i+1])
    {
        t=b[i];
        b[i]=b[i+1];
        b[i+1]=t;
    }
}
printf("%d",b[k-2]);
}

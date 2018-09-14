#include<stdio.h>
int main()
{
int a[1001],g,n,sum; 
g=0;
sum=0;
scanf("%d",&n);
for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
for(int i=0;i<n;i++)
{
    g=a[i];
    for(int j=0;j<i;j++)
    {
         if(a[j]==g)
        sum=sum+1;
    }
    printf("%d",sum+1);
    printf(" ");

    sum=0;
}
return 0;
}


#include<stdio.h>
int main()
{
int n,i,j,sum,a[1001];
sum=0;
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
for(j=i;j<n;j++)
	if(a[i]+a[j]==0)
sum=sum+1;
}
printf("%d",sum);
return 0;
}

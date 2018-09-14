#include<stdio.h>
int main()
{
 int n,m,i,j;
 scanf("%d",&n);
 scanf("%d",&m);
 int a[n][m];
 for(i=0;i<n;i++)
 for(j=0;j<m;j++)
 scanf("%d",&a[i][j]);
 for(i=0;i<m;i++)
 {
 for(j=0;j<n;j++)
 printf("%d ",a[j][m-i-1]);
  printf("\n");
 }
 return 0;
 }
 
 

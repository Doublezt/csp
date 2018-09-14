#include<stdio.h>
int main()
{
    int a,r;
    r=0;
    scanf("%d",&a);
    while(a)
    {
        r=r+a%10;
        a=a/10;
    }
    printf("%d",r);
    return 0;
}

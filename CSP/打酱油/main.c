#include<stdio.h>
int main()
{
	int N,sum;
	scanf("%d",&N);
    sum=(N/50)*5+(N/50)*2;
    sum=sum+((N-(N/50)*5*10)/30)*3+((N-(N/50)*5*10)/30)*1;
    sum=sum+N-(((N-(N/50)*5*10)/30)*30)/10;
    printf("%d",sum);
    return 0;


}

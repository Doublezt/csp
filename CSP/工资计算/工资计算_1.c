#include<stdio.h>
int main()
{
	int t,i;
	scanf("%d",&t);
	
	if(t <= 3500)
	{
		printf("%d",t);
		return 0;
	}
	for(i = 3600; i <= 200000; i=i+100)
	{
		int x = 0; 
		if(i >= 3600 && i <= 5000)
		{
			x += (i-3500)*0.03;
		}
		if(i >= 5100 && i <= 8000)
		{
			x += (i-5000)*0.1+45;
		}
		if(i >= 8100 && i <= 12500)
		{
			x += (i-8000)*0.2+45+300;
		}
		if(i >=12600 && i <= 38500)
		{
			x += (i-12500)*0.25+45+300+900;
		}
		if(i >= 38600 && i <= 58500)
		{
			x += (i-38500)*0.3+45+300+900+6500;
		}
		if(i >= 58600 && i <= 83500)
		{
			x += (i-58500)*0.35+45+300+900+6500+6000;
		}
		if(i >= 83600)
		{
			x += (i-83500)*0.45+45+300+900+6500+6000+8750;
		}
		if(i-x == t)
		{
			printf("%d",i);
			break;
		}
	}
	return 0;
} 

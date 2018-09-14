#include<stdio.h>
#include<stdlib.h>
int main() {
	int i,j;
    int n,l,t;
	int *a,*b;
    printf("please input \n");
	scanf("%d %d %d",&n,&l,&t);
	a = (int*)malloc(sizeof(int)*n);
	b = (int*)malloc(sizeof(int)*n);

	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		b[i]=1;
	}


	for(j=0;j<t;j++){
		a[0]+=b[0];
		if(a[0]==0||a[0]==a[1]+1)
			b[0]*=(-1);
		for(i=1;i<n;i++){
			a[i]+=b[i];
			if(a[i-1]==a[i]){
				b[i]=b[i]*(-1);
				b[i-1]=b[i-1]*(-1);
			}
			if(a[i]==l)
				b[i]=b[i]*(-1);
		}
	}
	for(i=0;i<n;i++)
		printf("%d ",a[i]);

    return 0;
}

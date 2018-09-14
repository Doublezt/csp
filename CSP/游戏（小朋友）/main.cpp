#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
int main()
{
	int n,k,i,x;
	struct node *head,*p,*q,*t;
    printf("please input the data\n");
	head=NULL;
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++){
		x=i+1;
		p=(struct node *)malloc(sizeof(struct node));
		p->data=x;
		p->next=NULL;
		if(head==NULL){
			head=p;
		}else{
			q->next=p;
		}
			q=p;
	}
	q->next=head;
	t=head;
	if(k==1) printf("%d",n);
	else{
			int sum=1;
			while(t->next!=t){

			if((sum+1)%k==0||(sum+1)%10==k){
				t->next=t->next->next;
				sum++;
			}
			else{
				t=t->next;
				sum++;
			}
		}
		printf("%d",t->data);
		}
	return 0;
}

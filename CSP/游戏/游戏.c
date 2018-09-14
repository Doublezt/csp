 
#include<iostream>
#include<queue>
#include<stdio.h>
 
using namespace std;
 
int main()
{
    int n,k;
    queue<int> q;
 

    scanf("%d%d",&n,&k);
    for(int i=1; i<=n; i++)
        q.push(i);
 
    // 模拟出局过程
    int no=0, head;
    while(!q.empty()) {
        head = q.front();
        q.pop();
 
        no++;
        if(no % k == 0 || no % 10 == k)
            ;
        else
            q.push(head);
    }
 
    printf("%d\n", head);
 
    return 0;
}

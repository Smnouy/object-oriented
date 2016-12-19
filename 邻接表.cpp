#include<stdio.h>
#include<stdlib.h>
struct list
{
	int data;
	list *next;
}l[10000];
list* GetNode(int item)   //创建节点 
{ list* newnode=(list*)malloc(sizeof(list));   
  if(newnode==NULL)   
   { printf("申请内存失败");   
      exit(1);   
         }   
     newnode->data=item;   
     newnode->next=NULL;     
     return (newnode);   
}   
int main()
{
	int i=5;	
	int u,v;
	list *p,*q;
	for(int j=0;j<=5;j++)	l[j].next=NULL;
	while(i>0)
{

	scanf("%d%d",&u,&v);
	
	if(l[u].next==NULL)
	{
		l[u].next=GetNode(v);
	}
	else
	{
		p=GetNode(v);
		p->next=l[u].next;
		l[u].next=p;
	}
	
	if(l[v].next==NULL)
	{
		l[v].next=GetNode(u);
	}
	else
	{
		p=GetNode(u);
		p->next=l[v].next;
		l[v].next=p;
	}	
	i--;
}
	for(int j=0;j<=5;j++)
	{ 
	q=l[j].next;
	while(q!=NULL)
	{
		if(q==l[j].next)  printf("%d -> %d",j,q->data);
		else
		{	
			printf(" -> %d",q->data);
			//else  printf(" -> %d",q->data);
		
		} 
		q=q->next;
	} 
	printf("\n");
}
	return 0;
} 

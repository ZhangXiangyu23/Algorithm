#include <stdio.h>
#include <stdlib.h> 

struct ListNode{
	int val;
	struct ListNode *next;
};


//创建一个不带头结点的单链表
struct ListNode* Creat()
{
	printf("请依次输入节点的值,输入999表示结束!\n");
	int value;
	scanf("%d",&value);
	if(value==999)
	{
		return NULL;
	}
	else
	{
		struct ListNode* head=(struct ListNode*)malloc(sizeof(struct ListNode));
		head->val=value;
		head->next=NULL;
		struct ListNode* rear=head;
		scanf("%d",&value);
		while(value!=999)
		{
			struct ListNode* s=(struct ListNode*)malloc(sizeof(struct ListNode));
			s->next=NULL;
			s->val=value;
			rear->next=s;
			rear=s;
			scanf("%d",&value);
		}
		return head;
	}
	
} 


void Show(struct ListNode* head)
{
	if(head==NULL)
	{
		printf("这是个空链表!\n");
	}
	struct ListNode* p=head;
	while(p!=NULL)
	{
		printf("%d\n",p->val);
		p=p->next;
	}
}


struct ListNode* removeElements(struct ListNode* head, int val){
	struct ListNode* p=head;
	if(p==NULL)
	{
		return NULL;
	}
	while(p!=NULL)
	{
		if(p->val!=val)
		{
			break;
		}
		p=p->next;
	}
	if(p==NULL)
	{
		return NULL;
	}
	struct ListNode* temp=p;
	while(p->next!=NULL)
	{
		if(p->next->val==val)
		{
			p->next=p->next->next;	
		}
		else
		{
			p=p->next;	
		} 
	}	
		
	return temp;

	
}





int main()
{
	struct ListNode* head=Creat();
	Show(head); 
	printf("--------------------\n");
	struct ListNode* result=removeElements(head,6);
	Show(result);
	return 0;	
}

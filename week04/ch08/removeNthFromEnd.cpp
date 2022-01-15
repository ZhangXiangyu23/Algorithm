#include <stdio.h>
#include <stdlib.h>

struct ListNode{
	int val;
	struct ListNode *next;
};

//����һ������ͷ���ĵ�����
struct ListNode* Creat()
{
	printf("����������ڵ��ֵ,����999��ʾ����!\n");
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
		printf("���Ǹ�������!\n");
	}
	struct ListNode* p=head;
	while(p!=NULL)
	{
		printf("%d\n",p->val);
		p=p->next;
	}
}

//ͳ�Ƹ���
int Count(struct ListNode* head)
{
	int sum=0;
	struct ListNode* p=head;
	while(p!=NULL)
	{
		sum++;
		p=p->next;
	}
	return sum;
} 



struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
	int sum=Count(head);
	if(sum==n)
	{
		return head->next;
	}
	int step=sum-n-1;
	struct ListNode* p=head;
	for(int i=0;i<step;i++)
	{
		p=p->next;
	}
	struct ListNode* del=p->next;
	p->next=del->next;
	free(del);
	return head; 
}


int main()
{
	struct ListNode* head=Creat();
	Show(head); 
	printf("����ڵ���Ϊ:%d\n",Count(head));
	struct ListNode* result=removeNthFromEnd(head,1);
	printf("----------------\n");
	Show(result);
}



#include <stdio.h>
#include <stdlib.h>

struct ListNode{
	int val;
	struct ListNode *next;
};



//����ͷ����β�巨
struct ListNode* Creat()
{
	int value;
	printf("����������Ԫ��ֵ��ֱ��999����!\n");
	scanf("%d",&value);
	struct ListNode* L=NULL;
	if(value!=999)
	{
		L=(struct ListNode*)malloc(sizeof(struct ListNode));
		L->val=value;
		L->next=NULL;
		struct ListNode* r=L;
		scanf("%d",&value);
		while(value!=999)
		{
			struct ListNode* s=(struct ListNode*)malloc(sizeof(struct ListNode));
			s->val=value;
			s->next=NULL;
			r->next=s;
			r=s;
			scanf("%d",&value);
		}
	}
	return L;	
} 

void Show(struct ListNode* L)
{
	struct ListNode* p=L;
	while(p!=NULL)
	{
		printf("%d\t",p->val);
		p=p->next;
	}
	printf("\n");
}




struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2)
{
	struct ListNode* L=(struct ListNode*)malloc(sizeof(struct ListNode));
	struct ListNode* r=L;//βָ�� 
	struct ListNode* h1=list1;//����1 
	struct ListNode* h2=list2;//����2
	while(h1&&h2)
	{
		if(h1->val<=h2->val)
		{
			r->next=h1;
			r=h1;
			h1=h1->next;	
		}
		else
		{
			r->next=h2;
			r=h2;
			h2=h2->next;	
		}	
	}
	
	if(!h1)
	{
		r->next=h2;
	} 
	
	if(!h2)
	{
		r->next=h1;
	}
	return L->next;
} 


int main()
{
//	struct ListNode* L=Creat();
//	Show(L);
	struct ListNode* l1=Creat();
	Show(l1);
	struct ListNode* l2=Creat();
	Show(l2);
	//�ϲ� 
	struct ListNode* L=mergeTwoLists(l1,l2);
	Show(L);
	
	 
	
} 

#include <stdio.h>
#include <stdlib.h>
struct ListNode {
 	int val;
	struct ListNode *next;
};



struct ListNode* reverseList(struct ListNode* head)
{
	if(head==NULL)
	{
		return NULL;	
	}
	//����ͷ����ͷ�巨	
	struct ListNode *L=(struct ListNode *)malloc(sizeof(struct ListNode));
	L->next=NULL;
	struct ListNode* p=head;
	while(p!=NULL)
	{
		int key=p->val;
		struct ListNode* s=(struct ListNode *)malloc(sizeof(struct ListNode));
		s->val=key;
		s->next=L->next;
		L->next=s;
		p=p->next;
	} 
	return L->next;
}













//β�巨����������
struct ListNode* Creat()
{
	printf("����������Ԫ��ֵ������999����!\n");
	int value;
	struct ListNode* L=NULL;
	scanf("%d",&value);
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

//չʾ
void Show(struct ListNode* head)
{
	struct ListNode* p=head;
	while(p!=NULL)
	{
		printf("%d\t",p->val);	
		p=p->next;
	}		
	printf("\n");
} 

int main()
{
	struct ListNode* head=Creat();
	printf("չʾ:\n");
	Show(head);
	printf("��ת֮��:\n");
	Show(reverseList(head));
	
}

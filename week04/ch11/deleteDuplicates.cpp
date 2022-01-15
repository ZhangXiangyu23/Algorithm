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





struct ListNode* deleteDuplicates(struct ListNode* head){
	if(head==NULL)
	{
		return NULL;	
	} 
	else
	{
		struct ListNode* cur=head;
		while(cur->next!=NULL)
		{
			if(cur->val==cur->next->val)
			{
				cur->next=cur->next->next;	
			}
			else
			{
				cur=cur->next;	
			}	
		}	
	}
	return head;
}





int main()
{
	struct ListNode* head=Creat();
	Show(head); 
	printf("--------------------\n");
	struct ListNode* result=deleteDuplicates(head);
	Show(result);
	return 0;	
}

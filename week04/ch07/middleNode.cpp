#include <stdio.h>
#include <stdlib.h>
struct ListNode{
    int val;
    struct ListNode *next;
};


//β�巨 
struct ListNode* Creat()
{
	struct ListNode* head=NULL;
	head=(struct ListNode*)malloc(sizeof(struct ListNode));
	head->next=NULL;
	struct ListNode* rear=head;
	printf("����������ڵ��е�ֵ,����999��ʾ����!\n");
	int value;
	scanf("%d",&value);
	while(value!=999)
	{
		struct ListNode* s=(struct ListNode*)malloc(sizeof(struct ListNode));
		s->val=value;
		s->next=NULL;
		rear->next=s;
		rear=s;
		scanf("%d",&value);				
	} 
	return head;
}


//չʾ
//����״̬�루-1��ʾ�쳣��0��ʾ������ 
void Show(struct ListNode* head)
{
	struct ListNode* p=head->next;
	if(p==NULL)
	{
		printf("����Ϊ��!\n");
	}
	while(p!=NULL)
	{
		printf("%d\n",p->val);
		p=p->next;	
	}	
	
	
} 

//ͳ�ƽڵ�ĸ���
int Count(struct ListNode* head)
{
	int sum=0;
	struct ListNode* p=head->next;
	if(p==NULL)
	{
		return sum;	
	}	
	while(p!=NULL)
	{
		sum++;
		p=p->next;
	}
	return sum;
} 

struct ListNode* middleNode(struct ListNode* head){
	int sum=Count(head);
	int step=sum/2+1;
	struct ListNode* p=head;
	for(int i=1;i<step;i++)
	{
		p=p->next;
	}
	return p;
} 



int main()
{
	struct ListNode* head=Creat();
//	Show(head);
//	printf("�ڵ��ܸ���Ϊ:%d\n",Count(head));
	printf("%d\n",middleNode(head)->val);
	return 0;
}

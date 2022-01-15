#include <stdio.h>
#include <stdlib.h>
struct ListNode{
    int val;
    struct ListNode *next;
};


//尾插法 
struct ListNode* Creat()
{
	struct ListNode* head=NULL;
	head=(struct ListNode*)malloc(sizeof(struct ListNode));
	head->next=NULL;
	struct ListNode* rear=head;
	printf("请依次输入节点中的值,输入999表示结束!\n");
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


//展示
//返回状态码（-1表示异常，0表示正常） 
void Show(struct ListNode* head)
{
	struct ListNode* p=head->next;
	if(p==NULL)
	{
		printf("链表为空!\n");
	}
	while(p!=NULL)
	{
		printf("%d\n",p->val);
		p=p->next;	
	}	
	
	
} 

//统计节点的个数
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
//	printf("节点总个数为:%d\n",Count(head));
	printf("%d\n",middleNode(head)->val);
	return 0;
}

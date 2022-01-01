#include <stdio.h>
#include <stdlib.h>
#include <math.h>


struct ListNode{
	int val;
	struct ListNode* next;
};



//struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2)
//{
//	double num1=0.0;
//	double num2=0.0;
//	struct ListNode* p=l1;
//	int i=0;
//	while(p!=NULL)
//	{
//		num1=num1+pow(10,i)*(p->val);
//		p=p->next;
//		i++;
//	}
//	printf("%f\n",num1);
//	struct ListNode* q=l2;
//	int j=0;
//	while(q!=NULL)
//	{
//		num2=num2+pow(10,j)*(q->val);
//		q=q->next;
//		j++;
//	}
//	printf("%f\n",num2);
//	int sum=(int)(num1+num2);
//	printf("%f",sum);
//	if(sum==0)
//	{
//		struct ListNode* L=(struct ListNode*)malloc(sizeof(struct ListNode));
//		L->val=0;
//		L->next=NULL;
//		return L;
//	}
//	else
//	{
//		//算位数
//		int temp=sum;
//		int count=0;
//		while(temp!=0)
//		{
//			temp=temp/10;
//			count++;	
//		}
//		
//		struct ListNode* L=(struct ListNode*)malloc(sizeof(struct ListNode));
//		L->val=sum%10;
//		L->next=NULL;
//		struct ListNode* r=L;
//		 
//		int n=1;
//		while(n<=count-1)
//		{
//			sum=sum/10;
//			struct ListNode* s=(struct ListNode*)malloc(sizeof(struct ListNode));
//			s->val=sum%10;
//			r->next=s;
//			s->next=NULL;
//			r=s;
//			n++;	
//		}
//		return L; 
//	}
//	
//	
//
//	
//}



/*
思路：就像列竖式一样，从低位开始相加
有进位的，加上进位
用带有头结点的链表，更合适 
*/
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2)
{
	struct ListNode* head=(struct ListNode*)malloc(sizeof(struct ListNode));
	head->next=NULL;
	struct ListNode* p=head;
	int carry=0;//进位 
	while(l1!=NULL||l2!=NULL)
	{
		int a=l1?l1->val:0;
		int b=l2?l2->val:0;
		int sum=a+b+carry;
		carry=sum/10;
		struct ListNode* s=(struct ListNode*)malloc(sizeof(struct ListNode));
		s->val=sum%10;
		p->next=s;
		s->next=NULL;
		p=s;
		if(l1!=NULL)
		{
			l1=l1->next;	
		}
		if(l2!=NULL)
		{
			l2=l2->next;	
		}	
	}
	
	//看看最会相加之后，有没有进位
	if(carry)
	{
		struct ListNode* s=(struct ListNode*)malloc(sizeof(struct ListNode));
		s->val=1;
		s->next=NULL;
		p->next=s;
		p=s;	
	} 
	return head->next;
}










struct ListNode* Creat()
{
	printf("请依次输入值，输入999结束!\n");
	int k;
	struct ListNode* L;
	scanf("%d",&k);
	while(k!=999)
	{
		L=(struct ListNode*)malloc(sizeof(struct ListNode));
		L->val=k;
		L->next=NULL;
		struct ListNode* r=L;//尾指针 
		scanf("%d",&k);
		while(k!=999)
		{
			struct ListNode* s=(struct ListNode*)malloc(sizeof(struct ListNode));
			s->val=k;
			s->next=NULL;
			r->next=s;
			r=s;
			scanf("%d",&k);
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

int main()
{
	//建立一个链表
	struct ListNode* l1=Creat();
	Show(l1);
	struct ListNode* l2=Creat();
	Show(l2);
	struct ListNode* L=addTwoNumbers(l1,l2);
	Show(L);
	return 0;
}





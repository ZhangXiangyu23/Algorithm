#include <stdio.h>
#include <stdlib.h>

bool hasCycle(struct ListNode *head) 
{
	if(head==NULL||head->next==NULL)
	{
		return false;
	}
	struct ListNode* slow=head;
	struct ListNode* fast=head->next;
	while(slow!=fast)
	{
		if(fast->next==NULL||fast->next->next==NULL)
		{
			return false;	
		}		
		fast=fast->next->next;
		slow=slow->next;
	}
	return true; 
}





int main()
{
	
}

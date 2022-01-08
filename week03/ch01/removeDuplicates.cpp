#include <stdio.h>


int removeDuplicates(int* nums, int numsSize)
{
	if(numsSize==0)
	{
		return 0;
	}
	int flag=nums[0];
	int Pointer=0;
	for(int i=1;i<numsSize;i++)
	{
		if(nums[i]>flag)
		{
			flag=nums[i];
			Pointer++;
			nums[Pointer]=nums[i];
		} 
	}
	return Pointer+1;
	
}





int main()
{
	int nums[]={};
	removeDuplicates(nums,0);	
	
} 

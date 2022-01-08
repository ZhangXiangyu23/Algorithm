#include <stdio.h>


int removeElement(int* nums, int numsSize, int val)
{
	if(numsSize==0)
	{
		return 0;
	}
	int slow=-1;
	for(int i=0;i<numsSize;i++)
	{
		if(nums[i]!=val)
		{
			slow++;
			nums[slow]=nums[i];
		}
	}
	return slow+1;
}




int main()
{
	int nums[]={0,1,2,2,3,0,4,2};
	removeElement(nums,8,2);
}



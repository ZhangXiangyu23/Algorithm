#include <stdio.h>


int searchInsert(int* nums, int numsSize, int target)
{
	int low=0;
	int high=numsSize-1;
	while(low<=high)
	{
		int mid=(low+high)/2;
		if(nums[mid]==target)
		{
			return mid;	
		}
		if(target<nums[mid])
		{
			high=mid-1;	
		}
		if(target>nums[mid])
		{
			low=mid+1;	
		}	
	}
	return low; 
}


int main()
{
	int nums[]={1,3,5,6};
	int target=2;
	printf("%d\n",searchInsert(nums,4,target));		
} 

#include <stdio.h>


int search(int* nums, int numsSize, int target)
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
		else if(target<nums[mid])
		{
			high=mid-1;
		}
		else
		{
			low=mid+1;
		}
	}
	return -1;
}



int main()
{
	int nums[]={-1,0,3,5,9,12};
	int target=2;
	printf("%d\n",search(nums,6,target));
}

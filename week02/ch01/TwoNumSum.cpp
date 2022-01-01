#include <stdio.h>
#include <stdlib.h>



int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
	int* result=(int*)malloc(sizeof(int)*2);
	for(int i=0;i<numsSize-1;i++)
	{
		for(int j=i+1;j<numsSize;j++)
		{
			if(nums[i]+nums[j]==target)
			{
				result[0]=i;
				result[1]=j;
				*returnSize=2;
				return result;
			}
		}
	}
	*returnSize=0;
	return NULL;
}

int main()
{
	int nums[]={3,3};
	int* returnSize=NULL; 
	int* result=NULL;
	result=twoSum(nums,2,6,returnSize);
	printf("%d\t%d",result[0],result[1]);
	return 0;	
} 



#include <stdio.h>
#include <stdlib.h>

int* sortedSquares(int* nums, int numsSize, int* returnSize)
{
	int* result=(int*)malloc(sizeof(int)*numsSize);
	*returnSize=numsSize;
	int i=0;
	int j=numsSize-1;
	int k=numsSize-1;
	while(i<=j)
	{
		if(nums[i]*nums[i]>nums[j]*nums[j])
		{
			result[k]=nums[i]*nums[i];
			i++;
		}
		else
		{
			result[k]=nums[j]*nums[j];
			j--;
		}
		k--;
	}
	return result;
} 

void Show(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
}

int main()
{
	int nums[]={-7,-3,2,3,11};
	int* result=sortedSquares(nums,5,nums);
	Show(nums,5);
}

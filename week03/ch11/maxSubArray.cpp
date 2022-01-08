#include <stdio.h>

//Áª»úËã·¨ 
int maxSubArray(int* nums, int numsSize)
{
	int max=-9999;
	int sum=0;
	for(int i=0;i<numsSize;i++)
	{
		sum=sum+nums[i];
		if(sum>max)
		{
			max=sum;
		}
		if(sum<0)
		{
			sum=0;
		}
	}
	return max;
	 
}


int main()
{
	int nums[]={-1};
	printf("%d\n",maxSubArray(nums,1));
}

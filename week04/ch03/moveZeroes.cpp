#include <stdio.h>

void Show(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
}



void moveZeroes(int* nums, int numsSize)
{
		for(int i=1;i<numsSize;i++)
		{
			for(int j=0;j<numsSize-i;j++)
			{
				if(nums[j]==0)
				{
					int term=nums[j];
					nums[j]=nums[j+1];
					nums[j+1]=term;
				}
			}
		}
}



int main()
{
	int a[]={0,1,0,3,12};
	moveZeroes(a,5);
	Show(a,5);
}

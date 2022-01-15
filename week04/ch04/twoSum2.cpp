#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* numbers, int numbersSize, int target, int* returnSize)
{
	int* result=(int*)malloc(sizeof(int)*2);
	*returnSize=2;
	for(int i=0;i<numbersSize;i++)
	{
		int low=i+1;
		int high=numbersSize-1;
		while(low<=high)
		{
			int mid=low+(high-low)/2;
			if(numbers[mid]==target-numbers[i])
			{
				result[0]=i+1;
				result[1]=mid+1;
				return result;
			}
			if(target-numbers[i]>numbers[mid])
			{
				low=mid+1;
			}
			if(target-numbers[i]<numbers[mid])
			{
				high=mid-1;
			}
		}
	}
	result[0]=-1;
	result[1]=-1;
	return result;
}


int main()
{
	int numbers[]={-1,0};
	int target=-1;
	int* result=twoSum(numbers,2,target,numbers);
	printf("%d\n",result[0]);
	printf("%d\n",result[1]);
}

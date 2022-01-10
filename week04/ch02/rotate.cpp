#include <stdio.h>


void rotate(int* nums, int numsSize, int k)
{
	//ธจึ๚สýื้
	int a[numsSize];
	for(int i=0;i<numsSize;i++)
	{
		a[i]=nums[i];	
	} 
	for(int i=0;i<numsSize;i++)
	{
		nums[(i+k)%numsSize]=a[i];
	}
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
	int nums[]={-1};
	int k=2;
	rotate(nums,1,2);
	Show(nums,1);
	return 0;
}

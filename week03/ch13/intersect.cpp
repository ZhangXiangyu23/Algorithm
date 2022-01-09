#include <stdio.h>
#include <stdlib.h>


int Partition(int a[],int low,int high)
{
	int pivot=a[low];
	while(low<high)
	{
		if(low<high&&a[high]>=pivot)
		{
			high--;
		}
		a[low]=a[high];
		if(low<high&&a[low]<pivot)
		{
			low++;
		}
		a[high]=a[low];
	}
	a[high]=pivot;
	return low;
}






void QuickSort(int a[],int low,int high)
{
	if(low<high)
	{
		int p=Partition(a,low,high);
		QuickSort(a,low,p-1);
		QuickSort(a,p+1,high);
	}
}


int* intersect(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize)
{
	QuickSort(nums1,0,nums1Size-1);
	QuickSort(nums2,0,nums2Size-1);
	int len=nums1Size<nums2Size ? nums1Size : nums2Size;
	int* result=(int*)malloc(sizeof(int)*len);
	int i=0;
	int j=0;
	int k=0;
	while(i<nums1Size&&j<nums2Size)
	{
		if(nums1[i]==nums2[j])
		{
			result[k]=nums1[i];
			i++;
			j++;
			k++;
		}
		else if(nums1[i]<nums2[j])
		{
			i++;
		}
		else
		{
			j++;
		}
	}
	*returnSize=k;
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
//	int a[]={5,-2,0,3,8,12};
//	printf("排序之前:\n");
//	Show(a,6);
//	printf("排序之后:\n");
//	QuickSort(a,0,5);
//	Show(a,6);
	printf("公共部分是:\n");
	int nums1[]={1,2,2,1};
	int nums2[]={2};
	int* returnSize=nums2;
	int* result=intersect(nums1,4,nums2,1,returnSize);
	Show(result,*returnSize);
}




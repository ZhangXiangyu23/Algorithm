#include <stdio.h>
#include <stdlib.h>



double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size)
{
	int sum=nums1Size+nums2Size;
	int *a=(int*)malloc(sizeof(int)*sum);
	int i=0;
	int j=0;
	int k=0;
	while(i<nums1Size&&j<nums2Size)
	{
		if(nums1[i]<=nums2[j])
		{
			a[k]=nums1[i];
			i++;
			k++;
		}
		else
		{
			a[k]=nums2[j];
			j++;
			k++;
		}
	}
	
	while(i<nums1Size)
	{
		a[k]=nums1[i];
		i++;
		k++;		
	}
	while(j<nums2Size)
	{
		a[k]=nums2[j];
		j++;
		k++;
	}
	
	//如果为偶数 
	if(sum%2==0)
	{
		return (a[sum/2]+a[sum/2-1])/2.0;
	}
	else
	{
		return (double)a[sum/2];
	}
	
}






int main()
{
	int nums1[]={2};
	int nums2[]={};
	printf("%f",findMedianSortedArrays(nums1,1,nums2,0));
} 

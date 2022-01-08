#include <stdio.h>
#include <stdlib.h>

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n)
{
	int* nums3=(int*)malloc(sizeof(int)*m);
	for(int i=0;i<m;i++)
	{
		nums3[i]=nums1[i];
	}	
	int flagSum=0;
	int flag1=0;
	int flag2=0;
	while(flag1<m&&flag2<n)
	{
		if(flag1<m&&nums3[flag1]<=nums2[flag2])
		{
			nums1[flagSum]=nums3[flag1];
			flag1++;
			flagSum++;
		}
		else if(flag2<n&&nums2[flag2]<nums3[flag1])
		{
			nums1[flagSum]=nums2[flag2];
			flag2++;
			flagSum++;
		}
	}
	
	while(flag1<m)
	{
		nums1[flagSum]=nums3[flag1];
		flag1++;
		flagSum++;
	}
	
	while(flag2<n)
	{
		nums1[flagSum]=nums2[flag2];
		flag2++;
		flagSum++;
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
	int nums1[]={0};
	int nums2[]={1};
	merge(nums1,1,0,nums2,1,1);
	Show(nums1,1);
}

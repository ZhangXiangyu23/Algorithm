#include <stdio.h>




//非递减排序 
void InsertionSort1(int a[],int n)
{
	for(int j=1;j<n;j++)
	{
		int key=a[j];
		int i=j-1;
		while(i>=0&&a[i]>key)
		{
			a[i+1]=a[i];
			i--;
		}
		a[i+1]=key;
	}
}


//非递增排序
void InsertionSort2(int a[],int n)
{
	for(int j=1;j<n;j++)
	{
		int key=a[j];
		int i=j-1;
		while(i>=0&&a[i]<key)
		{
			a[i+1]=a[i];
			i--;
		}
		a[i+1]=key;
	}
}




//展示 
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
	int a[6]={5,2,4,6,1,3};
	printf("排序之前:\n");
	Show(a,6);
	InsertionSort1(a,6);
	printf("非递减排序之后:\n");
	InsertionSort1(a,6);
	Show(a,6);
	printf("非递增排序之后:\n");
	InsertionSort2(a,6);
	Show(a,6); 
	return 0;	
} 

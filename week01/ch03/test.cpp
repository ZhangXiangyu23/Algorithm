#include <stdio.h>
#include <stdlib.h>


int b[8];
void Merge(int a[],int p,int q,int r)
{
	int n=r-p+1;
	for(int i=p;i<=r;i++)
	{
		b[i]=a[i];	
	}		
	int i=p;
	int j=q+1;
	int k=p;
	while(i<=q&&j<=r)
	{
		if(b[i]<=b[j])
		{
			a[k]=b[i];
			i++;
			k++;
		}
		else
		{
			a[k]=b[j];
			j++;
			k++;
		}
	}
	
	while(i<=q)
	{
		a[k]=b[i];
		i++;
		k++;
	}
	
	while(j<=r)
	{
		a[k]=b[j];
		j++;
		k++;
	}
} 

//归并排序 
void MergeSort(int a[],int p,int r)
{
	if(p<r)
	{
		int q=(p+r)/2;
		MergeSort(a,p,q);
		MergeSort(a,q+1,r);
		Merge(a,p,q,r);	
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
	int a[8]={5,2,4,7,1,3,2,6};
	printf("排序之前:\n");
	Show(a,8);
	printf("归并排序之后:\n");
	MergeSort(a,0,7);
	Show(a,8);
}

#include <stdio.h>



//�ϲ�
void Merge(int a[],int p,int q,int r)
{
	int n1=q-p+1;
	int n2=r-q;
	int L[n1+1];
	int R[n2+1];
	for(int i=0;i<n1;i++)
	{
		L[i]=a[p+i];
	}
	
	for(int j=0;j<n2;j++)
	{
		R[j]=a[q+1+j];
	}
	L[n1]=999;//��ʾ���� 
	R[n2]=999;//��ʾ���� 
	
	int i=0;
	int j=0;
	for(int k=p;k<=r;k++)
	{
		if(L[i]<=R[j])
		{
			a[k]=L[i];
			i++; 
		}
		else
		{
			a[k]=R[j];
			j++;
		}
	}
	
}




//�鲢���� 
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
	printf("����֮ǰ:\n");
	Show(a,8);
	printf("�鲢����֮��:\n");
	MergeSort(a,0,7);
	Show(a,8);
}

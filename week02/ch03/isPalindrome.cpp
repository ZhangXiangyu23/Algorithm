#include <stdio.h>



bool isPalindrome(int x)
{
	if(x<0)
	{
		return false;
	}
	if(x==0)
	{
		return true;
	}
	int num=x;
	int count=0;
	while(num!=0)
	{
		num=num/10;
		count++;
	}

	int a[count];
	a[0]=x%10;
	int i=1;
	while(i<=count-1)
	{
		x=x/10;
		a[i]=x%10;
		i++;
	}
	
	
	int b[count];
	int k=0;
	for(int j=count-1;j>=0;j--)
	{
		b[j]=a[k];
		k++;	
	} 
 	
 	int n=0;
	for(int i=0;i<count;i++)
	{
		if(a[i]==b[i])
		{
			n++;
		}
	}
	if(n==count)
	{
		return true;
	}
	else
	{
		return false;
	}
}





int main()
{
	int x=-101;
	if(isPalindrome(x))
	{
		printf("true");	
	}
	else
	{
		printf("flase");	
	}	
} 

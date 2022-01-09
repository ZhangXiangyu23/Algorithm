#include <stdio.h>

int firstBadVersion(int n) 
{
	int low=1;
	int high=n;
	while(low<high)
	{
		//·ÀÖ¹Òç³ö 
		int mid=low+(high-low)/2;
		if(isBadVersion(mid))
		{
			high=mid;	
		}	
		else
		{
			low=mid+1;
		}
	}
	return low;    
}


int main()
{
	printf("%d\n",firstBadVersion(5));
}

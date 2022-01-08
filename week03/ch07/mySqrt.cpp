#include <stdio.h>

int mySqrt(int x)
{

	int left=1;
	int right=x;
	int mid;
	int sqrt;
	if(x==0)
	{
		return 0;
	}
	while(left<=right)
	{
		mid=left+(right-left)/2;
		sqrt=x/mid;
		if(sqrt==mid)
		{
			return mid;
		}
		if(sqrt<mid)
		{
			right=mid-1;
		}
		if(sqrt>mid)
		{
			left=mid+1;
		}
		
	}
	return left-1;
}






int main()
{
	printf("%d\n",mySqrt(8));
}

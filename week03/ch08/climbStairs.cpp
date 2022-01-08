#include <stdio.h>
#include <stdlib.h>

int climbStairsMemory(int n,int memo[]) 
{
	if(memo[n]>0)
	{
		return memo[n];
	}
	if(n==1)
	{
		memo[n]=1;
	}
	else if(n==2)
	{
		memo[n]=2;
	}
	else
	{
		memo[n]=climbStairsMemory(n-1,memo)+climbStairsMemory(n-2,memo);
	}
	return memo[n];
}

int climbStairs(int n)
{
	int memo[n+1];
	for(int i=0;i<n+1;i++)
	{
		memo[i]=-1;
	}
	return climbStairsMemory(n,memo);
}




int main()
{
	printf("%d\n",climbStairs(3));
	return 0;
}

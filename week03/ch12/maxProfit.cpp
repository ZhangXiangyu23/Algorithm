#include <stdio.h>


int maxProfit(int* prices, int pricesSize)
{
	int MinPrice=99999;
	int MaxProfit=0;
	for(int i=0;i<pricesSize;i++)
	{
		if(prices[i]<MinPrice)
		{
			MinPrice=prices[i];	
		}	
		else if(prices[i]-MinPrice>MaxProfit)
		{
			MaxProfit=prices[i]-MinPrice;
		}
	} 
	return MaxProfit;
}



int main()
{
	int a[]={7,6,4,3,1};
	printf("%d\n",maxProfit(a,5));
	return 0;
}

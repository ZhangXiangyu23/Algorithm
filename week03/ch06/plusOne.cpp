#include <stdio.h>
#include <stdlib.h>

int* plusOne(int* digits, int digitsSize, int* returnSize)
{
	for(int i=digitsSize-1;i>=0;i--)
	{
		if(digits[i]+1<=9)
		{
			digits[i]=digits[i]+1;
			*returnSize=digitsSize;
			return  digits;
		}	
		if(digits[i]+1==10)
		{
			digits[i]=0;
		} 
	} 
	digits=(int*)realloc(digits,(digitsSize+1)*sizeof(int));
	digits[0]=1;
	digits[digitsSize]=0;
	*returnSize=digitsSize+1;
	return digits;
}




int main()
{
	int digits[]={9,9};
	int* NewArray=plusOne(digits,2,digits);
	for(int i=0;i<3;i++)
	{
		printf("%d\t",NewArray[i]);
	}
} 

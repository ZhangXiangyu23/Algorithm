#include <stdio.h>


void reverseString(char* s, int sSize)
{
	int low = 0;
	int high = sSize-1;
	while(low<high)
	{
		char temp = s[low];
		s[low] = s[high];
		s[high]= temp;
		low++;
		high--; 
	}
}


void Show(char a[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%c\t",a[i]);
	}
	printf("\n"); 
}


int main()
{
	char s[]={'h','e','l','l','o'};
	reverseString(s,5);
	Show(s,5);
	return 0;	
} 

#include <stdio.h>
#include <String.h>

char * reverseWords(char * s)
{
	int low = 0;
	int high = 0;
	int len = strlen(s);
	int k=0;
	while(k<=len)
	{
		if(s[k]==' '||k==len)
		{
			int high = k-1;
			while(low<high)
			{
				char temp = s[low];
				s[low] = s[high];
				s[high] = temp;
				low++;
				high--;
			}
			k++;
			low=k;
			high=k;
		}
		else
		{
			k++;
		}
	}
	return s;
	
}



int main()
{
	char* s="Let's take LeetCode contest";
	reverseWords(s);
	for(int i=0;i<strlen(s);i++)
	{
		printf("%c",s[i]);
	}
}

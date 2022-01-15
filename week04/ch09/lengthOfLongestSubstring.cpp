#include <stdio.h>
#include <String.h> 


//»¬¶¯´°¿Ú 
int lengthOfLongestSubstring(char * s){
	int len = strlen(s);
	int left = 0;
	int right = 0;
	int flag = 0;
	int max = 0;
	int i,j;
	for(i = 0;i < len;i++)
	{
		if(left <= right)
		{
			flag = 0;
			for(j = left;j < right;j++)
			{
				if(s[j]==s[right])
				{
					flag = 1;
					break;	
				}	
			}
			if(flag == 1)
			{
				left = j + 1;	
			}	
		}
		max = max < (right-left+1) ? (right-left+1) : max;
		right++;
	}
	return max;
}




int main()
{
	char* s="abcabcbb";
	printf("%d\n",lengthOfLongestSubstring(s));
	return 0;	
} 

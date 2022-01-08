#include <stdio.h>
#include <String.h>


int strStr(char * haystack, char * needle)
{
	int hlen=strlen(haystack);
	int nlen=strlen(needle);
	for(int i=0;i+nlen<hlen;i++)
	{
		bool flag=true;
		for(int j=0;j<=nlen;j++)
		{
			if(needle[j]!=haystack[j+i])
			{
				flag=false;
				break;
			}
		}
		if(flag)
		{
			return i;
		}
	}
	return -1;
}

int main()
{
	char* haystack="";
	char* needle="";
	strStr(haystack,needle); 
}

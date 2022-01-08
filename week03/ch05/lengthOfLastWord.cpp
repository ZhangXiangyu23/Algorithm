#include <stdio.h>
#include <String.h>

int lengthOfLastWord(char * s)
{
	int len=strlen(s);
	int Sum=0;
	int flag=0;
	for(int i=len-1;i>=0;i--)
	{
		if(s[i]!=' ')
		{
			flag=1;
			Sum++;
		}
		if(s[i]==' '&&flag==1)
		{
			break;
		}
	}
	return 	Sum;
} 


int main()
{
	char* s = "";
	printf("%d\n",lengthOfLastWord(s));
}

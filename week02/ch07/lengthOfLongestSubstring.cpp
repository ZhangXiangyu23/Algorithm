#include <stdio.h>
#include <string.h>




//int lengthOfLongestSubstring(char * s)
//{
//	//ͳ��һ���ַ����� 
//	int n=strlen(s);
//	char a[n];
//	for(int i=0;i<n;i++)
//	{
//		a[i]=s[i];
//	}
//	int max=0;
//	for(int i=0;i<n;i++)
//	{
//		int num=1;
//		for(int j=i+1;j<n;j++)
//		{
//			int flag=0;
//			for(int k=j-1;k>=0;k--)
//			{
//				if(a[j]==a[k])
//				{
//					flag=1;
//					break;
//				}
//			}
//			if(flag==1)
//			{
//				num=num;
//				break;
//			}
//			else
//			{
//				num++;
//			}
//		}
//		if(num>max)
//		{
//			max=num;
//		}
//	}
//	return max;
//}

int lengthOfLongestSubstring(char * s)
{
    int i;  
    int index[128];
    for(i=0;i<128;i++){
        index[i]=-1;
    }
    int left =-1;                        //left �Ǵ�����߽��ǰһ��λ��
    int len =strlen(s);
    if (len ==1) return 1;
    int count =0; 
    for(i=0;i<len;i++){
        if(index[s[i]]>left){            //�� index[s[i]] > left ������˵��֮ǰ���ֹ����ַ��ڴ�����
            left = index[s[i]];
        }
        if(count<i-left) count= i-left;
        index[s[i]]=i;
    }
    return count;
}






int main()
{
	char *s="pwwkew";
	printf("%d\n",lengthOfLongestSubstring(s));
}

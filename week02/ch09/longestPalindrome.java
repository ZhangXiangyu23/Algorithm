public class longestPalindrome
{
    public static String longestPalindrome(String s)
    {
        String result="";
        int n=s.length();
        char []a=s.toCharArray();
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n+1;j++)
            {
                String k=s.substring(i,j);//每次都进行截取，非常耗时
                char []k1=k.toCharArray();
                int low=0;
                int high=k1.length-1;
                int f=1;//假设是回文串
                while(low<high)
                {
                    if(k1[low]!=k1[high])
                    {
                        f=0;
                        break;
                    }
                    low++;
                    high--;
                }
                if(f==1&&k.length()>result.length())
                {
                    result=k;
                }
            }
        }
        return result;
    }

    public static void main(String[] args)
    {
        String s="ac";
        String result=longestPalindrome(s);
        System.out.println(result);

    }
}

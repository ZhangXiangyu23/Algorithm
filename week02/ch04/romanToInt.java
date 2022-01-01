public class romanToInt {
    public static void main(String[] args) {
        System.out.println(romanToInt("III"));
    }
    public static int romanToInt(String s)
    {
        int sum=0;
        int preNum=getValue(s.charAt(0));
        for (int i=1;i<s.length();i++)
        {
            int num=getValue(s.charAt(i));
            if (num<=preNum)
            {
                sum=sum+preNum;
            }
            else
            {
                sum=sum-preNum;
            }
            preNum=num;
        }
        sum=sum+preNum;

        return sum;
    }

    private static int getValue(char c)
    {
        switch (c)
        {
            case 'I':return 1;
            case 'V':return 5;
            case 'X':return 10;
            case 'L':return 50;
            case 'C':return 100;
            case 'D':return 500;
            case 'M':return 1000;
            default:return 0;
        }
    }
}

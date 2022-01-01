import javax.swing.*;
  public class longestCommonPrefix {
    public static void main(String[] args)
    {
        String []strs={"flower","flow","flight"};
        System.out.println("公共字符串为"+longestCommonPrefix(strs));
    }
    //纵向扫描法
    public static String longestCommonPrefix(String[] strs)
    {
        if (strs.length==0||strs==null)
        {
            return "";
        }
        int n=strs[0].length();
        for (int i=0;i<n;i++)
        {
            char x=strs[0].charAt(i);
            for (int j=1;j<strs.length;j++)
            {
                if (i==strs[j].length()||strs[j].charAt(i)!=x)
                {
                    return strs[0].substring(0,i);
                }
            }
        }
        return strs[0];
    }


}

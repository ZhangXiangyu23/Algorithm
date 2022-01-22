public class floodFill {
    static int []dx={0,0,1,-1};
    static int []dy={1,-1,0,0};

    public static void main(String[] args) {
        int [][]image={{1,1,1},{1,1,0},{1,0,1}};
        int sr = 1;
        int sc = 1;
        int [][]result=floodFill(image,sr,sc,2);
        for (int i = 0;i < 3;i++)
        {
            for (int j = 0;j < 3;j++)
            {
                System.out.print(result[i][j]+" ");
            }
            System.out.println();
        }
    }


    public static int[][] floodFill(int[][] image, int sr, int sc, int newColor) {
        int curColor = image[sr][sc];
        if (curColor != newColor)
        {
            DFS(image,sr,sc,curColor,newColor);
        }
        return image;
    }


    public static void  DFS(int[][] image, int sr, int sc, int Color, int newColor)
    {
        if (image[sr][sc] == Color)
        {
            image[sr][sc] = newColor;
            for (int i = 0;i < 4;i ++)
            {
                int mx = sr + dx[i];
                int my = sc + dy[i];
                if (mx >= 0&&mx <image.length&&my >= 0&&my < image[0].length)
                {
                    DFS(image,mx,my,Color,newColor);
                }
            }
        }
    }
}

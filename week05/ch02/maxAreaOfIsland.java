
public class maxAreaOfIsland {
    public static void main(String[] args) {
        int [][] a={{0,0,1,0,0,0,0,1,0,0,0,0,0},{0,0,0,0,0,0,0,1,1,1,0,0,0},
            {0,1,1,0,1,0,0,0,0,0,0,0,0},{0,1,0,0,1,1,0,0,1,0,1,0,0},
            {0,1,0,0,1,1,0,0,1,1,1,0,0},{0,0,0,0,0,0,0,0,0,0,1,0,0},
            {0,0,0,0,0,0,0,1,1,1,0,0,0},{0,0,0,0,0,0,0,1,1,0,0,0,0}};
        System.out.println(maxAreaOfIsland(a));
    }

    public static int maxAreaOfIsland(int[][] grid) {
        int result = 0;
        for (int i=0;i<grid.length;i++)
        {
            for (int j=0;j<grid[0].length;j++)
            {
                result = Math.max(result,DFS(i,j,grid));
            }
        }
        return result;
    }


    public static int DFS(int i,int j,int[][] grid)
    {
        int result;
        if (i<0||i>=grid.length||j<0||j>=grid[0].length||grid[i][j]!=1)
        {
            return 0;
        }
        else
        {
            int[] dx={0,0,-1,1};
            int[] dy={1,-1,0,0};
            grid[i][j]=0;
            result = 1;
            for (int h=0;h<4;h++)
            {
                int i_next = i+dx[h];
                int j_next = j+dy[h];
                result += DFS(i_next,j_next,grid);
            }
        }
        return result;
    }
}

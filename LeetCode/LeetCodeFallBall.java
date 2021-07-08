public class Solution 
{
    public static int[] findball(int[][] grid)
    {
        int[] ans = new int[grid[0].length];
        
        for (int i = 0; i < ans.length; i++) 
        {
            ans[i] = recorrido(grid, i);
        }
        return ans;
        
    }
    
    public static int recorrido(int[][]grid ,int i)
    {
        int x,y;
        int colum = grid[0].length;
        x = i;
        y = 0;
        
        while (y<grid.length) 
        {
            if (grid[y][x] == 1 ) 
            {
                if (x+1 == colum) return -1; //si choca con la pared
                else if (grid[y][x] != grid[y][x+1]) return -1; //si el de su costado es diferente
                else 
                {
                    y++; //bajamos de fila;
                    x++; //nos movemos a la derecha
                }
            }
            else if(grid[y][x] == -1)
            {
                if (x-1 == -1) return -1; //que no chocque con la pared
                else if (grid[y][x] != grid[y][x-1]) return-1; //que el de su costado lo deje pasar 
                else
                {
                    y++; //bajamos de fila 
                    x--; //nos movemos hacia la izquierda 
                }
            }
        }
        return x;
    }
    /*
    [1, 1,  1,  -1, -1]
    [1, 1,  1,  -1, -1]
    [-1,-1,-1,  1,   1]
    [1, 1,  1,  1,  -1]
    [-1,-1,-1,  -1, -1]
    
    */
    
    
    public static void main(String[] args) 
    {
        int[][] grid = {{-1}};
        int [] ans = findball(grid);
        for (int i = 0; i < ans.length; i++)
        {
            System.out.print(ans[i] + " ");
        }
    }
}

public class Solution 
{
    public static int[] countBits(int n) 
    {
        int[] dp = new int[n+1]; 
        for (int i = 1; i < n+1; i++) 
        {
            dp[i] = dp[i & (i-1)] + 1; // se hace el and del actual con el anterior y hallamos 
                                        //la cantidad de bits de ese numero 
        }
        return dp;
    }
    public static void main(String[] args) {
        int n = 5;
        int [] ans = countBits(n);
        
        for (int i = 0; i < ans.length; i++) 
        {
            System.out.println(ans[i] + " ");
        }
    }
}

    public static  List<List<String>> partition(String s)
    {
        List<List<String>> ans = new ArrayList<List<String>>();
        backTracking(s, ans, 0, new ArrayList<String>());
        
        return ans;
    }
    public static void backTracking(String s, List<List<String>> ans, int inicio, List<String> subResult)
    {
        if (inicio == s.length()) 
        {
            ans.add(new ArrayList<String>(subResult));
        }
        for (int fin = inicio; fin < s.length(); fin++) 
        {
            if (isPalindrome(s.substring(inicio,fin+1)))
            {
                subResult.add(s.substring(inicio,fin+1));
                backTracking(s, ans, fin+1, subResult);
                subResult.remove(subResult.size()-1);
            }
        }
    }
    
    
    public static boolean isPalindrome(String s)
    {
        for (int i = 0; i < s.length()/2; i++) 
        {
            if (s.charAt(i) != s.charAt(s.length()-1-i)) return false;
        }
        return true;
    }
    public static void main(String[] args)
    {
        List<List<String>> ans = partition("aab");
        System.out.println(ans.toString());
    }
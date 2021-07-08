

import java.util.HashMap;

/**
 *
 * @author javier
 */
public class Solution 
{
    public static int numIdenticalPairs(int[] nums)
    {
        HashMap<Integer,Integer> map = new HashMap<>();
        int cont = 0;
        for (int i: nums)
        {
            map.put(i,(int)map.getOrDefault(i, 0) + 1);
        }
        for (Integer key: map.keySet())
        {
            int valor = map.get(key);
            cont += (valor*(valor-1))/2;
        }
        return cont;
    }
}
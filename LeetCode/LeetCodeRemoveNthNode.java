class Solution {
    public static ListNode removeNthFromEnd(ListNode head, int n)
    {
        int size = 0 ;
        ListNode ans = head;
        ListNode ptr = head;
        while (ptr != null)
        {
            size ++;
            ptr = ptr.next;
        }
        
        ptr = ans;
        int pos = size-n;
        if(size == 1) return null;
        
        if(pos == 0)
        {
            ans = ans.next;
            return ans;
        }
        
        for (int i = 0; i < size-n-1; i++) 
        {
            ptr = ptr.next;
        }
        
        if (ptr.next != null) 
        {
            ptr.next = ptr.next.next;
        }
        
        return ans;
        
    } 
}
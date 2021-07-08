#include<iostream>

using namespace std; 

struct ListNode{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

int main(){

    ListNode* l1 = new ListNode(9, new ListNode(9, new ListNode(9)));
    ListNode* l2 = new ListNode(5, new ListNode(6));

    int carry = 0;
    ListNode* first = l1;
    ListNode* second = l2;
    
    ListNode* ans = new ListNode();
    ListNode* ptr = ans;
    
    while (first || second) {
        int sum = carry;
        
        if (first) { //si es NULL no entra 
            sum += first->val;
            first = first->next;
        }
        if (second) { //si es NULL no entra
            sum += second->val;
            second = second->next;
        }
        
        ptr->next = new ListNode(sum % 10);
        carry = sum > 9 ? 1 : 0;           
        ptr = ptr->next;
    }
    
    if (carry) {
        ptr->next = new ListNode(carry);
    }
    

    ans = ans->next; //el primer valor tiene 0

    while(ans){
        cout << ans->val;
        ans = ans->next;
    }

    return 0;
}
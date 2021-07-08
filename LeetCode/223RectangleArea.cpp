#include <bits/stdc++.h>

using namespace std; 

class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) 
    {
        int area1 = (ax2 - ax1) * (ay2 - ay1);
        int area2 = (bx2 - bx1) * (by2 - by1);

        if(ay1 > by2 || by1 > ay2) return area1 + area2;
        if(ax1 > bx2 || bx1 > ax2) return area1 + area2;
        
        int base, altura; 

        if(ay2 > by2) altura = by2 - max(ay1 , by1);
        else if(by2 >= ay2) altura = ay2 - max(ay1, by1);

        if(ax2 > bx2) base = bx2 - max(ax1, bx1);
        else if(bx2 >= ax2) base = ax2 - max(ax1, bx1);

        return area1 + area2 - base * altura;

    }
};

int main(){
    Solution *a = new Solution();
    cout << a->computeArea(-2, -2 , 2,2,3,3,4,4) << endl;
}
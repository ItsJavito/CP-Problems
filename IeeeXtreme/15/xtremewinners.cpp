#include <bits/stdc++.h>
typedef std::string s;
int main() {
    s a[] {"Team 1" , "Knapsackers@UNT" , "MoraSeekers" , "SurpriseTeam","CuSAT","DongskarPedongi","cofrades","viRUs","TeamName","TeamEPFL1","whatevs","WildCornAncestors","TheCornInTheFields","Aurora"};
    //s q; scanf("%s", &q);  printf("%d", (find(a,a + 15,q) - a + 1));
    for(auto &c : a){
        std::cout << c[1] - 'a'<< '\n';
    }
}
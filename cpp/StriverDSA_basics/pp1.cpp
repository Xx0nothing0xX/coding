#include<iostream>
#include <unordered_map>
using namespace std;
int romanToInt(string s) {
            int res = 0;
        unordered_map<char, int> m = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };

        int curr = 0;
        int next = m[s[0]];
        for (int i = 0; i < s.size() - 1; i++)
        {
            curr = next;
            next = m[s[i + 1]];
            res += curr * (curr >= next ? 1 : -1);
        }
        return res + next;
    
}
int Roman_to_int(string s){
            unordered_map<char, int> val = {
            {'I',1},
            {'V',5}, 
            {'X',10},
            {'L',50}, 
            {'C',100},
            {'D',500}, 
            {'M',1000}
        };

        int total = 0;

        for (int i = 0; i < s.length(); i++) {

            if (i + 1 < s.length() && val[s[i]] < val[s[i+1]])
                total -= val[s[i]];   // subtract case
            else
                total += val[s[i]];   // normal add
        }

        return total;
}
int main(){
    string s="MDCLIV";
    cout<<romanToInt(s);
}





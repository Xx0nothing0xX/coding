#include<iostream>
#include <bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    string s = "";
    int k = strs[0].length();
    int l = strs.size();
    for (int i=0 ; i < k  ; i++ ){
        char temp = strs[0][i];
        for ( int j = 0 ; j<l ; j++){
            if (strs[j][i]!=temp ){
                return s;
            }
            
        }
        s+= strs[0][i];
    }
    
    return s;
}

int main(){
    vector<string> strs = {"flower","flow","floight", "flowver"};
    string str_1 = longestCommonPrefix(strs);
    cout<< str_1 ;

}
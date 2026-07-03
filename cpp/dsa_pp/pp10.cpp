#include<iostream>
#include <bits/stdc++.h>
using namespace std;    

bool palindromeCheck(string& s){
    int n = s.size();
	if (n<=1) return true ;
    if ( s[0] != s[n-1]) return false ;
    string sub = s.substr(1, n - 2);
    return palindromeCheck(sub);
}

bool palindrome_string(string s, int n ){
    if (n<=1) return true ;
    if ( s[0] != s[n-1]) return false ;
    palindrome_string(s.substr(1, n-2) , n-2);
    return true;
}

int main(){
    string str = "aabbaa";
    cout<<palindrome_string(str , str.length());
}




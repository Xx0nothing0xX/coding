#include<iostream>
#include <bits/stdc++.h>
using namespace std;    

int mostFrequentElement(vector<int>& nums) {
    unordered_map<int, int> ump;
    for (int i=0 ; i<nums.size() ; i++){
        ump[nums[i]]++;
    }
    int k=0 ;
    int m=0;
    for (auto& [key,val] : ump){
        if (val>k || (val==k && m>key) ) k=val , m=key;
    }
    return m;
}

int main(){
    vector <int> nums = {4,4,5,5,6} ;
    mostFrequentElement(nums);
    
}



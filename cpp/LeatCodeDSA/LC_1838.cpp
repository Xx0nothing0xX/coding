#include<iostream>
#include <bits/stdc++.h>
using namespace std;    

int maxFrequency(vector<int>& nums, int k) {
    map<int, int> mp;
    for (int i=0 ; i<nums.size() ; i++){
        mp[nums[i]]++;
    }
    
    unordered_map<int,int> ump;

    int temp_key = 0;
    int temp_val= 0;
    int temp_k = k;
    for (auto it = mp.rbegin(); it != mp.rend(); it++){
        temp_key = it->first ;
        temp_val = it->second ;
        for (auto it2 = next(mp.rbegin()); it2 != mp.rend(); it2++){
            if ((temp_key - it2->first)>=0 ){
                temp_val += it2->second ;
                temp_k -= it2->first;
            }
            else break;
        }
        ump[it->first] += temp_val;
    }
    int y = 0 ;
    for (auto& [key,val] : ump){
        if (val>y) {
            y=val;
        }
    }
    cout<<y;
    return y;
}

int main(){
    vector <int> nums = {1,8,4,13, 14 ,2,4,56,6,4,5,3,5,6,3,5,3,45,6,1234567} ;
    int k = 5;
    maxFrequency(nums, k);
    
}


// INTERPRETED THE QUESTION WRONG ALSO ITS NOT WORKING AS INTENDED

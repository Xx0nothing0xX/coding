#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int singleNumber(vector<int>& nums){
    unordered_map<int,int> count ;
    for(int i = 0 ; i < nums.size() ; i++){
        count[nums[i]]++;
    }
    for (auto& [key, val] : count) {
        if ( val == 1 ){
            return key ;
        }
    }
    return -1 ;
}

//optimal
int singleNumber2(vector<int>& nums){
    int result = 0;
    for (int x : nums) result ^= x;
    return result;
}

int main (){
    vector<int> arr1 = { 0,1,0,1,1,0,1,1,1,1,1};
    vector<int> arr2 = { 1,2,3,6,7,1,2,3,6};
    cout<<singleNumber2(arr2);
}
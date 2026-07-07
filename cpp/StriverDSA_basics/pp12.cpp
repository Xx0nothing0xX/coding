#include<iostream>
#include <bits/stdc++.h>
using namespace std;    

vector<vector<int>> countFrequencies(vector<int>& nums) {
    unordered_map<int, int> ump;
    for (int i=0 ; i<nums.size() ; i++){
        ump[nums[i]]++;
    
    }
    vector<vector<int>> result;
    for (auto& [key, val] : ump) {
        result.push_back({key, val});
    }

    return result;

}

int main(){
    vector <int> nums = {1, 2, 2, 1, 3} ;
    vector<vector<int>> result = countFrequencies(nums);
    
    for (auto& row : result) {
        cout << row[0] << " -> " << row[1] << endl;
    }

}
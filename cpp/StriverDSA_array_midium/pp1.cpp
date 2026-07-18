#include<iostream>
#include <bits/stdc++.h>
using namespace std;

//  BRUTE 
vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> ans ;
    for (int i = 0 ; i<nums.size() ; i++){
        for (int j = i + 1 ; j < nums.size() ; j++){
            if (nums[i] + nums[j] ==target){
                cout<<i<<" "<<j ;
                ans.push_back(i);
                ans.push_back(j);
                break;   
            }
        }
    }        
    return ans ; 
}

//OPTIMAL
vector<int> twoSum2(vector<int>& nums, int target) {
    unordered_map<int,int> seen;  // value -> index
    for (int i = 0; i < nums.size(); i++){
        int need = target - nums[i];
        if (seen.count(need)) return {seen[need], i};
        seen[nums[i]] = i;
    }
    return {};
}
//ANOTHER OPTIMAL   TWO POINTER APPROACH    
vector<int> twoSum3(vector<int>& nums, int target) {
    // make another data str to store the original indecies
    sort(nums.begin(), nums.end());
    int left = 0 ;
    int right = nums.size() - 1 ; 
    while (left < right ){
        int temp = nums[left] + nums[right];
        // cout<<temp<<endl;
        if (temp > target ){
            right--;
        }
        else if (temp < target){
            left++;
        }
        else{ 
            cout<<left<<" "<<right;
            return {left , right };
        }
    }
    return {};
}
int main (){
    vector<int> arr1 = { 0,1,0,1,1,0,1,1,1,1,1};
    vector<int> arr2 = { 1,2,3,6,7};
    twoSum3(arr2 , 13 );
    
}
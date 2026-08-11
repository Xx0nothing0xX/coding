#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//BRUTE 
bool check(vector<int>& nums) {
    int right = 0;
    while (right < nums.size()-1 ){
        if (right == nums.size()-1 || nums[right]>nums[right + 1] ){
            right++;
            break;
        }
        right++;
    }
    //right pointer is in the position of intersection 

	for (int i=0 ; i<right-1 ; i++){
        if(nums[i]>nums[i+1]){
            return false ;
        }
    }

    if (right < nums.size()-1){
        for (right ; right < nums.size()-1 ; right++){
        if(nums[right]>nums[right+1]){
            return false ;
        }
        cout<<right <<" ";
       
    }
    }
    if (nums[right]>nums[0]){
        return false ;
    }
    return true;
}

// OPTIMAL SOLUTION 
bool check2(vector<int>& nums) {
    int n = nums.size();
    int breaks = 0;
    for (int i = 0; i < n; i++){
        if (nums[i] > nums[(i+1)%n]){
            breaks++;
        } 
    }
    return breaks <= 1;
}

int main(){
    vector<int> arr = {3,4,5,6,1,2};
    cout<<check2(arr);
}

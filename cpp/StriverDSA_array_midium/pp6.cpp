#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void nextPermutation(vector<int>& nums) {
    int n = nums.size();
    int idx = -1;
    for (int i=n-1; i>0; i--){
        if(nums[i]>nums[i-1]){
            idx = i-1;
            break;
        }
    }
    if(idx == -1){
        reverse(nums.begin(), nums.end());
        return;
    }
    for(int j=n-1; j>idx; j--){
        if(nums[j]>nums[idx]){
            swap(nums[j],nums[idx]);
            break;
        }
    }
    reverse(nums.begin()+(idx+1), nums.end());
}

int main(){
    vector<int> arr = {1,3,2};
    nextPermutation(arr);
    for (int i=0; i<arr.size(); i++) {
    cout << arr[i] << " ";
    }
}



#include<iostream>
#include <bits/stdc++.h>
using namespace std;


void rotate(vector<int>& nums , int k ){
    k = k % nums.size();
    int i = 0;
    while ( i < k){
        int temp = nums[0];
        nums.erase(nums.begin());
        nums.emplace_back(temp);
        i++;
    }
}

void rotate2(vector<int>& nums, int k){
    int n = nums.size();
    k = k % n;
    reverse(nums.begin(), nums.begin()+k);
    reverse(nums.begin()+k, nums.end());
    reverse(nums.begin(), nums.end());
}


int main (){
    vector<int> arr = {1,2,3,4,5,6,7};
    rotate2(arr , 3);
    for( int i =0 ; i < arr.size() ; i++){
        cout<< arr[i];
    }
}
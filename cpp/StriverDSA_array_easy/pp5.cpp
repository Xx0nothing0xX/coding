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
    vector<int> arr = {-2, 2, 4, 4, 4, 4, 5, 5};
    rotate(arr , 9);
    for( int i =0 ; i < arr.size() ; i++){
        cout<< arr[i];
    }
}
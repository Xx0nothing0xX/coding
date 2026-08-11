#include<iostream>
#include <bits/stdc++.h>
using namespace std;


int findMaxConsecutiveOnes(vector<int>& nums) {
    int maxOnes = 0, count = 0;
    for (int i = 0; i < nums.size(); i++){
        if (nums[i] == 1){
            count++;
        }
        else {
            count = 0;
        }
        maxOnes = max(maxOnes, count);
    }
    return maxOnes;
}

int main (){
    vector<int> arr1 = { 0,1,0,1,1,0,1};
    vector<int> arr2 = { 1,2,3,6,7};
    cout<<findMaxConsecutiveOnes(arr1);
}
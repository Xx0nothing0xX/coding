#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int largestElement(vector<int>& nums) {
    int l = nums[0];
    for ( int i = 1 ; i< (nums.size() - 1); i++){
        if( nums[i]> l){
            l=nums[i];
        }
    }
    cout<<l;
    return l;
}

int main (){
    vector<int> arr = {1,2,3,4,5,3,2,2,3,4,5,3,2,3,4,5,4,32,5,23,2,5,5,2,34,32};
    largestElement(arr);
}
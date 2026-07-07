#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int secondLargestElement(vector<int>& nums) {
    int l = nums[0];
    int k = -1;
    for ( int i = 1 ; i< nums.size(); i++){
        if( nums[i]> l ){
            k=l;
            l=nums[i];
        }
        else if (nums[i] > k && nums[i] != l) {
            k = nums[i];
        }
    }
    cout<<k;
    if(l==k) return -1;
    return k;
}

int main (){
    vector<int> arr = {10 , 5 , 8};
    secondLargestElement(arr);
}
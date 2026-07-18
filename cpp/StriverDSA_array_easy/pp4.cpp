#include<iostream>
#include <bits/stdc++.h>
using namespace std;


int removeDuplicates(vector<int>& nums) {
    int x = nums.size();
    int i =0;
    while ( nums.size()-1>i){
        if ( nums[i]==nums[i+1]){
            nums.erase(nums.begin() + i + 1);
            x--;
        }
        else i++;
        
    }
    cout<<x;
    return x;
}

// STRIVERS SOLUTION 
int removeDuplicates2(vector<int>& nums) {
    int i =0;
    for ( int j =1 ; j< nums.size() ; j++){
        if ( nums[i]!=nums[j]){
            nums[i+1]=nums[j];
            i++;    
        }
    }
    cout<<i+1;
    return i+1;
}

int main (){
    vector<int> arr = {-2, 2, 4, 4, 4, 4, 5, 5};
    removeDuplicates2(arr);
    
    
}
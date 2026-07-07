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

int main (){
    vector<int> arr = {-2, 2, 4, 4, 4, 4, 5, 5};
    removeDuplicates(arr);
    
    
}
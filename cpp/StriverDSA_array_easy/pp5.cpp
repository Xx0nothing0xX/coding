#include<iostream>
#include <bits/stdc++.h>
using namespace std;


void rotate(vector<int>& nums , int k ){
    int i = 0;
    while ( i < k){
        int temp = nums[0];
        nums.erase(nums.begin());
        nums.emplace_back(temp);
        i++;
    }
}



int main (){
    vector<int> arr = {-2, 2, 4, 4, 4, 4, 5, 5};
    rotate(arr , 3);
    for( int i =0 ; i < arr.size() ; i++){
        cout<< arr[i];
    }
}
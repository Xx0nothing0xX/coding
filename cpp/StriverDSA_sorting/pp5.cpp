#include<iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> bubblesort(vector<int>& nums , int n){
    if ( n <=1) return nums ;
    int j = n-1;
    while ( j>0 && nums[j-1]>nums[j]){
        swap( nums[j-1],nums[j]);
        j--;
    }
    return bubblesort(nums , n-1);
}



int main(){
    vector<int> nums = {1,3,2,5,4};
    int k = nums.size();
    bubblesort(nums , k);
    
    for ( int z : nums){
        cout<< z << " ";
    }
    

}

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//BRUTE
int majorityElement(vector<int>& nums) {
    unordered_map<int,int> count;
    for(int i=0; i<nums.size(); i++){
        count[nums[i]]++;
    }
    
    for (auto& [key,val] : count){
        if (val>=(nums.size()+1)/2){
            return key;
        }
    }
    return 0;
}

//OPTIMAL
int majorityElement2(vector<int>& nums)
{
    int count = 0;
    int candidate = 0;

    for (int x : nums)
    {
        if (count == 0)
        {
            candidate = x;
        }
        count += (x == candidate) ? 1 : -1;
    }

    return candidate;
}

int main(){
    vector<int> arr = {2,0,2,1,1,1,1,2,0,1};
    cout<<majorityElement(arr);
    cout<<(arr.size()+1)/2;
}

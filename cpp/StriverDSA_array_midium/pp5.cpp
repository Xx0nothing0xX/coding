#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//BRUTE
vector<int> rearrangeArray(vector<int>& nums) {
    vector<int> pos ;
    vector<int> neg ;
    vector<int> ans ;
    for (int i=0; i < nums.size(); i++){
        if (nums[i]>0){
            pos.push_back(nums[i]);
        }
        else {
            neg.push_back(nums[i]);

        }
    }
    int x=0;
    int y=0;
    for (int j = 0 ; j<nums.size() ; j++){
        if (j%2==0){
            ans.push_back(pos[x]);
            x++;
        }
        else{
            ans.push_back(neg[y]);
            y++;
        }
    }
    return ans;
}

//OPTIMAL
vector<int> rearrangeArray2(vector<int>& nums) {
    vector<int> ans(nums.size(), 0);
    int x=0;
    int y=1;
    for(int i=0; i<nums.size(); i++){
        if(nums[i]>0){
            ans[x]=nums[i];
            x+=2;
        }
        else{
            ans[y]=nums[i];
            y+=2;
        }
    }
    return ans;
    
}

int main(){
    vector<int> arr = {2, 4, 5, -1, -3, -4};
    rearrangeArray2(arr);
}


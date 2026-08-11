#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void sortZeroOneTwo(vector<int>& nums) {
    int left = 0;
    int right = nums.size()-1;

    for (int i = 0 ; i<right; i++){
        if (nums[i]==0 && left<nums.size()){
            swap(nums[left],nums[i]);
            left++;
        }
        else if(nums[i]==2 && right>=0){
            swap(nums[right],nums[i]);
            right--;
            i--;
        }
        else continue;
        
    }

}

void sortZeroOneTwo(vector<int>& nums) {
    int low=0 , mid=0 , high=nums.size()-1;
    while(mid<=high){
        if(nums[mid]==0){
            swap(nums[low], nums[mid]);
            low++;
            mid++;
        }
        else if(nums[mid]==1){
            mid++;
        }
        else{
            swap(nums[mid], nums[high]);
            high--;
        }
    }
    
}



int main(){
    vector<int> arr = {2,0,2,1,1,0};
    sortZeroOneTwo(arr);
    for(auto it : arr){
        cout<<it<<" ";
    }
}

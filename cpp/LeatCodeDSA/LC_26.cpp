#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int removeDuplicates(vector<int>& nums) {
    int i = 0 ;
    int k = 0 ;
    for (int j = 1 ; j < nums.size() ; j ++ ){
        if (nums[i]!=nums[j]){
            nums[i+1]=nums[j];
            i++;
        }
        else k++;
    }
    return k;
}

int main(){
    vector<int> arr = {1,2,2,3,3,4,4,5,6,7,7};
    cout<<removeDuplicates(arr);
}


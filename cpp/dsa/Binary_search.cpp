#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//ITERATIVE CODE
int bs(vector<int> nums, int target){
    int low = 0, high = nums.size()-1;
    while( low <= high){
        int mid = (low + high )/2;
        if (nums[mid]==target) return mid;
        else if ( nums[mid]> target) {
            high = mid-1;
        }
        else{
            low = mid + 1;
        }
    
    }
    return -1;
}

//RECURSIVE CODE
int bsr(vector<int> nums, int target , int low , int high){
    if (low > high ) return -1;

    int mid = (low + high)/2;
    if (nums[mid]==target) return mid;
    else if ( nums[mid]>target) return bsr(nums, target, low , mid);
    return bsr(nums, target, mid , high);

}

//LOWER BOUND
int lowerBound(vector<int>& arr, int target) {
    int low = 0, high = arr.size()-1;
    int ans = arr.size();
    while (low <= high) {
        int mid = (low+high)/2;
        if (arr[mid] >= target) {
            ans = mid;
            high = mid-1;
        } 
        else {
            low = mid+1;
        }
    }
    return ans;
}

//UPPER BOUND 
int upperBound(vector<int>& arr, int target) {
    int low = 0, high = arr.size()-1;
    int ans = arr.size();
    while (low <= high) {
        int mid = (low+high)/2;
        if (arr[mid] > target) {
            ans = mid;
            high = mid-1;
        } 
        else {
            low = mid+1;
        }
    }
    return ans;
}

int main(){
    vector<int> arr = {1,2,3,4,5,6,7,8};
    cout << bsr(arr, 3 , 0 , arr.size()-1);
}


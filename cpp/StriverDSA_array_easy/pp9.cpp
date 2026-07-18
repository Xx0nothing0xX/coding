#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>& nums) {
    int arraySum = 0 ; 
    int highest = nums.size() ; 
    for( int i=0; i<nums.size(); i++){
        arraySum += nums[i] ;
    }
    int realSum = highest*(highest+1)/2;
    int difference = realSum - arraySum ;
    return difference ;

}

int main (){
    vector<int> arr1 = { 0,1,2,3,4,5,7};
    vector<int> arr2 = { 1,2,3,6,7};
    cout<<missingNumber(arr1 );
}
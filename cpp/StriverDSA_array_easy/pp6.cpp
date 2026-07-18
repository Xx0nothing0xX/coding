#include<iostream>
#include <bits/stdc++.h>
using namespace std;


void zeroesEnd(vector<int>& nums ){
    int x = nums.size();
    int j = 0;
    int i=0;
    while ( j<x ){
        if (nums[i]==0){
            nums.erase(nums.begin()+i);
            nums.emplace_back(0);
        }
        else{
            i++;
        }
        j++;

    }
}

void zeroesEnd2(vector<int>& nums ){
    int j = -1;
    for (int i=0 ; i< nums.size() ; i++){
        if (nums[i]==0){
            j=i;
            break;
        }
    }
    if (j==-1) return;
    for (int i=j+1; i<nums.size(); i++){
        if ( nums[i]!=0){
            swap(nums[i] , nums[j]);
            j++; 
        }
    }
    return;
}   



int main (){
    vector<int> arr = { 1,0,2,0,3};
    zeroesEnd2(arr);
    for( int i =0 ; i < arr.size() ; i++){
        cout<< arr[i];
    }
}
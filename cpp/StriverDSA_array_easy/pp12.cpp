#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int longestSubarray(vector<int> &nums, int k){
    int len = 0 ;
    for( int i = 0 ; i<nums.size() ; i++){
        int temp = 0 ;
        int j = i ;
        while ( temp <= k && j<nums.size() ){
            temp += nums[j];
            j++;
            if ( temp == k ){
                len = max(j-i, len) ;
            }
        }
        
    }
    cout << len ;
    return len ;
}

//better for -ves
int longestSubarray2(vector<int> &nums, int k){
    int len = 0 ;
    for( int i = 0 ; i<nums.size() ; i++){
        int temp = 0 ;
        for (int j = i ; j<nums.size() ; j++){
            temp += nums[j];
            if ( temp == k ){
                len = max(j-i+1 , len);
            }
        }
        
    }
    cout << len ;
    return len ;

}
 
//optimal for positive
int longestSubarray3(vector<int> &nums, int k){
    int len = 0 ;
    int left = 0 ;
    int right = 0 ;
    int sum = nums[0] ;
    while (right < nums.size()){
        while( left<=right && sum > k){
            sum -= nums[left];
            left++;
        }
        if ( sum == k){
            len = max ( len , right - left + 1);
        } 
        right++;    
        sum += nums [right];
          
    }
    cout << len ;
    return len ;

}

//optimal for -ve 
int longestSubarray4(vector<int> &nums, int k){
    int len = 0 ;
    int sum = 0 ;
    map<int , int > preSumMap;
    for ( int i = 0 ; i < nums.size() ; i ++){
        sum += nums[i];
        if ( sum == k ){
            len = max ( len , i + 1 );

        }
        int rem = sum - k ;
        if ( preSumMap.find(rem ) != preSumMap.end()){
            int len2 = i - preSumMap[rem ];
            len = max ( len , len2 );

        }
        if ( preSumMap.find(sum) == preSumMap.end()){
            preSumMap[sum ] = i;

        }
    }
    cout<<len;
    return len ;
}

int main (){
    vector<int> arr1 = { 0,1,0,1,1,0,1,1,1,1,1};
    vector<int> arr2 = {10, 5, 2, 7, 1, 9 };
    longestSubarray4(arr2 , 15);
}
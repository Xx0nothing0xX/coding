#include<iostream>
#include <bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target) {
        for (int i =0; i<nums.size(); i++){
            for (int j=i+1; j<nums.size(); j++){
              if (target == (nums[i]+nums[j]))  {
                    return {i,j};
                }
            }
        }
    return {};

    }


int main(){
    vector<int> arr = {1,2,3,4,5};
    int target = 9;
    twoSum(arr, target);
}

// #include<iostream>
// #include<vector>
// using namespace std;

// vector<int> twoSum(vector<int>& nums, int target){
//     for ( int i=0; i < nums.size(); i++){
//         for (int j=i+1; j<nums.size(); j++){
//             if (nums[i]+nums[j] == target){
//                 return i;
//             }
//             else return "nothing";
//         }
//     }
// }

// int main(){
//     int nums[]={2,7,11,15};
//     cout<<twoSum(nums, 9);
// }


// #include <iostream>
// #include <vector>
// using namespace std;

// vector<int> twoSum(vector<int>& nums, int target){
//     for (int i = 0; i < nums.size(); i++){
//         for (int j = i + 1; j < nums.size(); j++){
//             if (nums[i] + nums[j] == target){
//                 return {i, j};  
//             }
//         }
//     }
//     return {};  
// }
// int main(){
//     vector<int> nums = {2,7,11,15};

//     vector<int> result = twoSum(nums, 9);

//     cout << result[0] << " " << result[1];
// }



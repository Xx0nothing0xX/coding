#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//GEMINI 
int  maxSum(vector<int> nums){
    int current_sum = nums[0];
    int max_sum = nums[0];
    for(int i=0; i<nums.size(); i++){
        current_sum = max(current_sum + nums[i], nums[i]);
        max_sum = max(max_sum, current_sum);

    }
    return max_sum;
}

//STRIVER 
int maxSum2(vector<int>& nums) {
    int current_sum = nums[0];
    int max_sum = nums[0];
    
    for (int i = 0; i < nums.size(); ++i) {
        current_sum+=nums[i];
        max_sum = max(max_sum, current_sum);
        if(current_sum<0){
            current_sum = 0;
        }
    }
    
    return max_sum;
}

void printMaxSubarray(vector<int>& nums) {
    if (nums.empty()) return;

    int max_sum = nums[0];
    int current_sum = nums[0];

    int start = 0;
    int end = 0;
    int temp_start = 0;

    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] > current_sum + nums[i]) {
            current_sum = nums[i];
            temp_start = i;
        } else {
            current_sum += nums[i];
        }

        if (current_sum > max_sum) {
            max_sum = current_sum;
            start = temp_start;
            end = i;
        }
    }

    cout << "Max Sum: " << max_sum << endl;
    cout << "Subarray: ";
    for (int i = start; i <= end; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
}

int main(){
    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    printMaxSubarray(arr);

}


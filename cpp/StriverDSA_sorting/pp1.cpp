#include<iostream>
#include<vector>
using namespace std;

vector<int> selection_sort(vector<int>& nums){
    int n = nums.size();
    for (int i=0 ; i<n-1 ; i++){
        int mini = i;
        for( int j=i ; j<n ; j++){
            if (nums[mini]>nums[j]){
                mini = j;
            }
        }
        int temp = nums[mini];
        nums[mini]=nums[i];
        nums[i]=temp;
    }
    return nums;
}

int main(){
    vector<int> arr = {1,3,6,5,4,2};
    int n = arr.size();

    selection_sort(arr);
    
    for (int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
}
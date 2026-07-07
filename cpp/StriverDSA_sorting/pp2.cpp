#include<iostream>
#include<vector>
using namespace std;

vector<int> bubble_sort(vector<int> nums){
    int n = nums.size();
    for (int i=n-1 ; i>0 ; i--){
        int didSwap =0 ;   
        for( int j=0 ; j<i ; j++){
            if (nums[j]>nums[j+1]){
                int temp = nums[j];
                nums[j]=nums[j+1];
                nums[j+1]=temp;
                didSwap = 1;   
            }
        }
        if(didSwap==0) {
            break;
        }
        
    }
    return nums ;
}

int main(){
    vector<int> arr = {1,3,6,5,4,2};
    int n = sizeof(arr)/sizeof(arr[0]);

    bubble_sort(arr);
    
    for (int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
}
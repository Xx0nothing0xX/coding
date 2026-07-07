#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> nums = {1,2,3,4,5,6,6,6,6,7};
    int k = nums.size();
    for ( int  i = 0 ; i < k ; i++){
        nums.erase(nums.begin()+i);
        cout<< nums.size();
    }
}



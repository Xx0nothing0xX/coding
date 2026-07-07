#include<iostream>
#include <bits/stdc++.h>
using namespace std;
                                    //USING STATIC VARIABLES

vector<int> bubblesort(vector<int>& arr){
    static int z = arr.size();
    if (z<=1){
        z = arr.size();
        return arr;
    }
    int i=1 ;
    while ( i< z ){
        if (arr[i]<arr[i-1]){
            swap(arr[i], arr[i-1]);
        }
        i++;
        cout<<"ok\n";
    }
    z--;
    return bubblesort(arr);
}

bool swapped = false;

                                        //for best case to be O(n)
// for (int i = 1; i < z; i++) {
//     if (arr[i] < arr[i - 1]) {
//         swap(arr[i], arr[i - 1]);
//         swapped = true;
//     }
// }
// if (!swapped)
//     return arr;


int main(){
    vector<int> nums = {1,2,3};
    int k = nums.size();
    bubblesort(nums);

    for ( int z : nums){
        cout<< z << " ";
    }
    

}

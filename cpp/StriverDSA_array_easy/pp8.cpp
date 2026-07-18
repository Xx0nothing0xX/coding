#include<iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
    vector<int> sol;
    int x = 0;
    int y = 0;

    while (x < nums1.size() && y < nums2.size()) {

        if (nums1[x] >= nums2[y]) {
            if (sol.empty() || nums2[y] != sol.back())
                sol.push_back(nums2[y]);
            y++;
        }
        else if (nums1[x] < nums2[y]) {
            if (sol.empty() || nums1[x] != sol.back())
                sol.push_back(nums1[x]);
            x++;
        }
        // else {
        //     if (sol.empty() || nums1[x] != sol.back())
        //         sol.push_back(nums1[x]);
        //     x++;
        //     y++;
        // }
    }

    while (x < nums1.size()) {
        if (sol.empty() || sol.back() != nums1[x])
            sol.push_back(nums1[x]);
        x++;
    }

    while (y < nums2.size()) {
        if (sol.empty() || sol.back() != nums2[y])
            sol.push_back(nums2[y]);
        y++;
    }
    for(auto it : sol){
        cout<<it;
    }
    return sol;
}

int main (){
    vector<int> arr1 = { 1,2,3,4,5,5,5};
    vector<int> arr2 = { 1,2,3,6,7};
    unionArray(arr1 , arr2 );
}
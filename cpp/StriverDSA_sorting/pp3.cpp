#include<iostream>
#include<vector>
using namespace std;

// my solution, not optimal
void insersion_sort(int arr[] , int n){
    int z = 0;
    for (int i=1 ; i<n ; i++){
        for( int j=i ; j>0 ; j--){
            if (arr[j]<arr[j-1]){
                int temp = arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
                
            }
            z++;
        }
        
    }
    cout<<z<<"\n";
}

// striver solution 
vector<int> insersion_sort2(vector<int> nums){
    int n = nums.size();
    for (int i=0 ; i<n ; i++){
        int j=i;
        while (j>0 && nums[j-1] > nums[j]){
            int temp = nums[j];
            nums[j]=nums[j-1];
            nums[j-1]=temp;
            j--;
        }
    }
    return nums;
}


int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    insersion_sort(arr , n);
    
    for (int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
}
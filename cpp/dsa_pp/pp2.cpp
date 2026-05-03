#include<iostream>
using namespace std;
void TwoSum(int arr[], int target) {
    int size = sizeof(arr) / sizeof(arr[0]);
    for ( int i =0 ; i<size; i++ ){
        for (int j = i+1; j<size; j++){
            if (arr[i] + arr[j] == target){
                cout << "Pair found: " << arr[i] << " and " << arr[j] << endl;
                return;
            }
        }
    } 
    cout << "No pair found." << endl;
}
int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int target = 6;
    TwoSum(arr, target);
}

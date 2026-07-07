#include<iostream>
using namespace std;

void selection_sort(int arr[] , int n){
    for (int i=0 ; i<n-1 ; i++){
        int mini = i;
        for( int j=i ; j<n ; j++){
            if (arr[mini]>arr[j]){
                mini = j;
            }
        }
        int temp = arr[mini];
        arr[mini]=arr[i];
        arr[i]=temp;
    }
}

int main(){
    int arr[] = {1,3,6,5,4,2};
    int n = sizeof(arr)/sizeof(arr[0]);

    selection_sort(arr , n);
    
    for (int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
}
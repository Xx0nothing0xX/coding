#include<iostream>
using namespace std;

void bubble_sort(int arr[] , int n){
    for (int i=n-1 ; i>0 ; i--){
        int didSwap =0 ;         // optimization for best case
        for( int j=0 ; j<i ; j++){
            if (arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                didSwap = 1;   
            }
        }
        if(didSwap==0) {
            break;
        }
        
    }
}

int main(){
    int arr[] = {1,3,6,5,4,2};
    int n = sizeof(arr)/sizeof(arr[0]);

    bubble_sort(arr , n);
    
    for (int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
}
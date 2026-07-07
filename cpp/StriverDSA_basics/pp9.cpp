#include<iostream>
#include <bits/stdc++.h>
using namespace std;    

void reverse(int arr[], int n){
    if (n<=1) return;
    swap( arr[0], arr[n-1]);
    reverse(arr + 1 , n-2);
    
    

}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    reverse(arr , 5);
    for (int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }
}




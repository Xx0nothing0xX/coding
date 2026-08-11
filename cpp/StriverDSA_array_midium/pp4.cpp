#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int stockBuySell(vector<int> arr, int n){
    int max_profit = 0;
    int current_profit = 0;
    int buy = 0 ;
    int sell = 1 ;

    while(sell<n){
        if (arr[sell]<arr[buy]){
            buy=sell;
            sell++;
        }
        else{
            current_profit = arr[sell]-arr[buy];
            sell++;
        }
        max_profit = max(max_profit, current_profit);
    }
    return max_profit;
}

int main(){
    vector<int> arr = {5,4,3,2,1};
    cout<<stockBuySell(arr,5 );
}


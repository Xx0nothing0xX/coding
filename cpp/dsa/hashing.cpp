#include<iostream>
#include <bits/stdc++.h>
using namespace std;    


int main(){
    int arr[] = {1,2,3,4,2,2,3,2,2,5,5,5,4,1,7,1,5,7,1,5,2,1,3,8,3,2,1,6,8,3,8,6,5};
    int hash[9] = {0};
    for ( int i=0 ; i<sizeof(arr) / sizeof(arr[0]) ; i++){
        hash[arr[i]] +=1 ;
    }
    // another  method maps
    unordered_map<int , int> ump;
    for (int i=0 ; i<sizeof(arr) / sizeof(arr[0]) ; i++){
        ump[arr[i]]++;
    }
    int k ;
    cin>>k;
    cout<< (ump[k] == hash[k]);


    // how to iterate on a map[]
    for (auto it = ump.begin(); it != ump.end(); it++) {
    cout << it->first << " -> " << it->second << "\n";
}

}
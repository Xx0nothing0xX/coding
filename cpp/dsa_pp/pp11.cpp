#include<iostream>
#include <bits/stdc++.h>
using namespace std;    

int fibo(int n ){
    if (n<=1 ) return n ; 
    return fibo(n-1) + fibo(n-2) ;

}

int main(){
    int k ;
    while (true){
        cin>> k;
        if (k==0) break;
    
        cout<<fibo(k)<<endl;
    }
}




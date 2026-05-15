#include<iostream>
using namespace std;
int countDigit(int n) {
    int digits = 0 ;
    for (int i =0 ; n>0 ; i++){
        n = n/10;
        digits += 1 ;
    }
    cout<<digits;
    return digits;
}
    
int main(){
    int k ;
    cout<< "Enter::";
    cin>>k;
    countDigit(k);
}
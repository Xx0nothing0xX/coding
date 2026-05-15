#include <iostream>
using namespace std;


int reverseNumber(int n) {
        int rev =0 ;
        for(int i=0; n>0 ; i++){
            rev *= 10;
            rev += n%10;
            n = n/10;
        }
        return rev;
    }

int main(){
    int k ;
    cout<< "Enter::";
    cin>>k;
    cout<<reverseNumber(k);
}
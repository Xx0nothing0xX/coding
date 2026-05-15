#include<iostream>
using namespace std;    
bool isPalindrome(int n) {
    if (n < 0 || (n % 10 == 0 && n != 0)) return false;
    int rev = 0 ;

    while (n>rev){
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return  rev == n || rev / 10 == n;

}
int main(){
    int k ;
    cout<< "Enter::";
    cin>>k;
    cout<<isPalindrome(k);
}
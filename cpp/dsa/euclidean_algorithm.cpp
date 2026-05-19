#include<iostream>
#include<array>
using namespace std;

void gcd(int a, int b){
    while ( a>0 && b>0 ){
        if (a>b) a=a%b ;
        else b=b%a;
    }
    if (a==0) cout<<b;
    else cout<< a;
    
}
int main (){
    gcd(65460, 15);
}
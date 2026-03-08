#include<iostream>
using namespace std;
int maxof(int a, int b, int c=0){
    if (a<b & b>c) return b;
    else if ( a>b & a>c) return a;
    else return c;
}

int main(){
    int x=2;
    int* ptr = &x;                // stores the location of the x variable
    cout<< ptr<< endl<< *ptr <<endl; 
    cout<<maxof(4,2,3);
}




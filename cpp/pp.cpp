#include<iostream>
using namespace std;
void pattern(int a ){
    int k =1; 
    for (int i=0; i<2*a-1; i++){
        for (int j=0; j<2*a-1; j++){
            cout<< a- min(min(i,j), min((2*a-2) -j, (2*a-2)-i))<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int a;
    cout<< "input: ";
    cin>> a;
    pattern(a);
}


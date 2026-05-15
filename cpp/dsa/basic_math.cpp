#include<iostream>
#include<array>
using namespace std;

array<int, 3> extraction(int n){
    array<int ,3> arr{};
    for (int i = 0; i < 3; i++){
        arr[i] = n%10;
        n/=10;
    }
    cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<endl;
    return arr;
}
int main(){
    
    extraction(123);
}

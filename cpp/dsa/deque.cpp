#include<iostream>
#include<deque>
using namespace std;

void learning_deque(){
    deque<int> d;
    d.push_back(1);   
    d.emplace_back(2); 
    d.push_front(3); 
    d.emplace_front(4); 
    // other functions are same as vectors
    // difference in short is that deque allows insertion and deletion at both ends in O(1) time complexity while vector allows insertion and deletion only at the end in O(1) time complexity.
}
int main(){
    learning_deque();
}
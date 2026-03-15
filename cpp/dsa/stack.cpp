#include<iostream>
#include<stack>
using namespace std;

void learning_stack(){
    stack<int> s;
    s.push(1);   // adds an element at the top of the stack
    s.emplace(2); // adds an element at the top of the stack but is faster than push
    s.top(); // gives the top element of the stack
    s.pop(); // removes the top element of the stack

    // other functions are same as vectors
}
int main(){
    learning_stack();
}
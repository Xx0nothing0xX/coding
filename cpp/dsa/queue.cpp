#include<iostream>
#include<queue>
using namespace std;

void learning_queue(){
    queue<int> q;
    q.push(1);   // adds an element at the end of the queue
    q.emplace(2); // adds an element at the end of the queue but is faster than push
    q.front(); // gives the front element of the queue
    q.back(); // gives the back element of the queue
    q.pop(); // removes the front element of the queue

    // other functions are same as vectors
}
int main(){
    learning_queue();
}
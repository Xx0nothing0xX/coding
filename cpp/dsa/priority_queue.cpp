#include<iostream>
#include<queue>
using namespace std;
void learning_priority_queue(){
    priority_queue<int> pq; // by default it is a max heap
    pq.push(1);
    pq.push(3);
    pq.push(2);

    cout << "Top element: " << pq.top() << endl; // gives the top element of the priority queue

    pq.pop(); // removes the top element of the priority queue

    cout << "Top element after pop: " << pq.top() << endl; // gives the new top element of the priority queue

    priority_queue<int, vector<int>, greater<int>> min_pq; // for min heap
    min_pq.push(1);
    cout << "Top element of min heap: " << min_pq.top() << endl;
    // other functions are same as vectors
}
int main(){
    learning_priority_queue();
}
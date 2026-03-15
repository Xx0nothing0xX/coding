#include<iostream>
using namespace std;
#include<list>
void learning_list(){
    // pretty similar to vectors but the main difference is that list is a doubly linked list and vector is a dynamic array
    list<int> l;
    l.push_back(1); 
    l.emplace_back(2);
    l.push_front(3); // adds an element at the beginning of the list
    l.emplace_front(4); // adds an element at the beginning of the list but is faster than push_front

    // other functions are same as vectors
}
int main(){
    learning_list();
}
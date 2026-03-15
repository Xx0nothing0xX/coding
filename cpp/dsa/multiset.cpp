#include<iostream>
#include<set>
using namespace std;

void learning_multiset(){
    multiset<int> ms; // by default it is a multiset of integers and is sorted not unique
    ms.insert(1); // adds an element to the multiset
    ms.insert(2);
    ms.insert(3);
    ms.emplace(4); // adds an element to the multiset but is faster than insert
    cout << "Elements in the multiset: ";
    for (auto it : ms) {
        cout << it << " "; // prints the elements in the multiset
    }
    cout << endl;

    ms.erase(2); // removes an element from the multiset
    ms.erase(ms.find(2)); // removes one occurrence of 2 from the multiset
    // ms.erase(ms.find(1), ms.find(2) + 2); // removes another occurrence of 2 from the multiset

    cout << "Elements in the multiset after erasing 2: ";
    for (auto it : ms) {
        cout << it << " "; // prints the elements in the multiset after erasing 2
    }
    cout << endl;

    if (ms.find(3) != ms.end()) { // checks if an element is present in the multiset
        cout << "3 is present in the multiset" << endl;
    } else {
        cout << "3 is not present in the multiset" << endl;
    }

    cout << "Count of 4 in the multiset: " << ms.count(4) << endl; // counts the number of occurrences of an element in the multiset, which can be more than 1 since it's a multiset
    // other functions are same as vectors
}

int main(){
    learning_multiset();
}
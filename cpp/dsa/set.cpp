#include<iostream>
#include<set>
using namespace std;
void learning_set(){
    set<int> s; // by default it is a set of integers and is sorted
    s.insert(1); // adds an element to the set
    s.insert(2);
    s.insert(3);
    s.emplace(4); // adds an element to the set but is faster than insert
    cout << "Elements in the set: ";
    for (auto it : s) {
        cout << it << " "; // prints the elements in the set
    }
    cout << endl;

    s.erase(2); // removes an element from the set

    cout << "Elements in the set after erasing 2: ";
    for (auto it : s) {
        cout << it << " "; // prints the elements in the set after erasing 2
    }
    cout << endl;

    if (s.find(3) != s.end()) { // checks if an element is present in the set
        cout << "3 is present in the set" << endl;
    } else {
        cout << "3 is not present in the set" << endl;
    }

    cout << "Count of 4 in the set: " << s.count(4) << endl; // counts the number of occurrences of an element in the set, which is either 0 or 1 since it's a set
    // other functions are same as vectors
}
int main(){
    learning_set();
} 
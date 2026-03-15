#include<iostream>
#include<map>
using namespace std;

void learning_map(){
    map<int, string> m; // by default it is a map of integers to strings and is sorted
    m[1] = "one"; // adds an element to the map
    m[2] = "two";
    m[3] = "three";
    m.emplace(4, "four"); // adds an element to the map but is faster than insert
    cout << "Elements in the map: ";
    for (auto it : m) {
        cout << it.first << ": " << it.second << " "; // prints the elements in the map
    }
    cout << endl;

    m.erase(2); // removes an element from the map
    m.erase(m.find(2)); // removes an element from the map

    cout << "Elements in the map after erasing 2: ";
    for (auto it : m) {
        cout << it.first << ": " << it.second << " "; // prints the elements in the map after erasing 2
    }
    cout << endl;

    if (m.find(3) != m.end()) { // checks if an element is present in the map
        cout << "3 is present in the map" << endl;
    } else {
        cout << "3 is not present in the map" << endl;
    }

    cout << "Value associated with key 4: " << m[4] << endl; // gets the value associated with a key in the map
}

int main(){
    learning_map();
}
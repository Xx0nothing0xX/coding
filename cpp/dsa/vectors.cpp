#include<iostream>
#include<vector>
using namespace std;
void learning_vectors(){
    vector<int> v;
    v.push_back(1);   //adds an element at the end of the vector
    v.emplace_back(2); // adds an element at the end of the vector but is faster than push_back
    cout<< v[0] << " "<< v[1]<<endl;

    vector<pair<int, int>> vec;
    vec.push_back({1,2});
    vec.emplace_back(3,4); //can add without using {} 

    vector<int> v2(5, 100); // creates a vector of size 5 with all elements initialized to 100
    vector<int> v3(v2); // creates a vector v3 which is a copy of v2

    // to access elements 
    cout<< v[0] << " "<< v[1]<<endl;

    //or
    vector<int> :: iterator it = v.begin(); // iterator points to the first element of the vector
    it++; // moves the iterator to the next element
    cout<< *it << " "; // dereferencing the iterator to get the value

    vector<int> :: iterator it2 = v.end(); // iterator points to the element after the last element of the vector
    it2--; // moves the iterator to the last element

    vector<int> :: reverse_iterator it3 = v.rbegin(); // reverse iterator points to the last element of the vector

    v.back() = 5; // changes the last element of the vector to 5
     
    for (auto it = v.begin(); it != v.end(); it++){
        cout<< *it << " ";
    }
    for (auto it : v){ // range based for loop
        cout<< it << " ";
    }

    v.erase(v.begin()+1); // erases the element at index 1
    v.erase(v.begin(), v.begin()+3); // erases the elements from index 0 to index 2 (exclusive)
    
    v.insert(v.begin(), 10); // inserts 10 at the beginning of the vector
    v.insert(v.begin()+1, 2, 20); // inserts 2 elements of value 20 at index 1
    v.insert(v.begin()+1, v2.begin(), v2.end()); // inserts the elements of v2 at index 1
    
    v.size(); // returns the size of the vector
    v.pop_back(); // removes the last element of the vector
    v.swap(v2); // swaps the contents of v and v2
    v.clear(); // removes all the elements from the vector
    v.empty(); // returns true if the vector is empty, false otherwise
}
int main(){
    learning_vectors();
}
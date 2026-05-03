#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool comp(int a, int b) {
    return a > b;
}
void sorting_algorithms(){
    // sorting algorithms in C++ are sort, stable_sort, partial_sort, nth_element, and is_sorted
    // sort is a sorting algorithm that sorts a range of elements in ascending order
    // stable_sort is a sorting algorithm that sorts a range of elements in ascending order and maintains the relative order of equal elements
    // partial_sort is a sorting algorithm that sorts a range of elements in ascending order and only sorts the first n elements
    // nth_element is a sorting algorithm that rearranges the elements in a range such that the element at the nth position is the element that would be in that position if the range were sorted
    // is_sorted is a function that checks if a range of elements is sorted in ascending order


    vector<int> v = {5, 2, 9, 1, 5, 6};
    vector<int> sorted_v = v;              // copy
    sort(sorted_v.begin(), sorted_v.end());  // sort copy
    stable_sort(v.begin(), v.end());      // sort original
    sort(sorted_v.begin(), sorted_v.end(), greater<int>());  // sort copy in descending order

    cout << "Sorted vector: ";
    for (int i : sorted_v) {
        cout << i << " ";
    }
    cout << endl;

    
    // if you want your own sorting algorithm, make a bool function 
    sort(v.begin(), v.end(), comp);
    

    int number = 3;
    int cnt = __builtin_popcount(number); // counts the number of set bits in the binary representation of the number


    string str = "123";  // alwaus start with the smallest permutation of the string to get all the permutations in lexicographical order
    do {
        cout<< str << endl;
    } while (next_permutation(str.begin(), str.end())); // generates the next permutation of the string in lexicographical order


    int maxi = *max_element(v.begin(), v.end()); // returns the maximum element in the vector
    int mini = *min_element(v.begin(), v.end()); // returns the minimum element in




}
     
int main(){
    sorting_algorithms();
}

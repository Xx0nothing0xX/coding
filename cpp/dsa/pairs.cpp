#include<iostream>
using namespace std;
void learning_pairs(){
    pair<int, int> p={1,2};
    cout<< p.first << " "<<p.second;
    cout<<endl;

    pair<int, string> a={1,"ok"};
    cout<< a.first << " "<< a.second<<endl;

    // nested pairs
    pair<int, pair<int, int>> b={1,{2,3}};
    cout<< b.first << " " <<endl;
    cout<< b.second.first<< " "<< b.second.second<<endl;
    
    // note that you cant print a pair 

    // array as pair
    pair<int , int> arr[] = {{1,2},{3,4}};
    cout<< arr[1].first;
}
int main(){
    learning_pairs();
}
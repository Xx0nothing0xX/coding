// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5] = {1,2,3,4,5};                     //decleration
//     for ( int i=0; i<=4; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     arr[0]=100;
//     for ( int i=0; i<=4; i++){
//         cout<<arr[i]<<" ";
//     } 
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[] = {1,2,3,4,5};   
//     int n = sizeof(arr)/4;
//     int mx =INT_MIN;
//     for (int i=1; i<n; i++){
//         mx= max(mx, arr[i]);
//     }
//     cout<<mx;
// }

// #include<iostream>
// using namespace std;
// bool pal(int x[], int n){
//     int i=0, j=n-1;
//     while (i<j){
//         if (x[i]!=x[j]){
//             cout<<"no";
//             return false;
//         } 
//         i++;
//         j--;
//     }
//     cout<<"yes";
//     return true;
// }
// int main(){
//     int arr[]= {1,2,3,4,3,2,1, 5};
//     int n = sizeof(arr) / 4;
//     pal(arr,n);
// }



//                                                        2D arrays
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[2][3]= {{1,2,3},{4,5,6}};
// }



// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5][5];
//     for (int i=0; i<5; i++){
//         for (int j=0; j<5; j++){
//             arr[i][j]=7;
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }


//                                           strings

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    getline(cin, str);        //  operater , variable
    cout<<str<<endl;
    str[0] = 'n';         //updating string
    cout<<str<<endl;

    // functions
    cout<<str.length()<<endl;
    str.push_back('a');  //adds a to the last of the string
    cout<< str <<endl;
    str.pop_back();  //removes the last character of the string
    cout<< str <<endl;
    str.append(" ok");
    cout<<str<<endl;
    // or
    str=str+ " ok"; 
    
    reverse(str.begin(), str.end());
    cout<<str<<endl;

    str.clear();            // empty the string
    cout<<str<<endl;


    int k=1234;
    string s= to_string(k);        //converts to string
    cout<<s<<endl;
    
    int l=stoi(s);              //converts to int
    cout<<l;
}
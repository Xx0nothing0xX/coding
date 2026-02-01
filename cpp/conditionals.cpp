// // 
// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     cout<<"Enter number A: ";
//     cin>>a;
//     int b;
//     cout<<"Enter number B: ";
//     cin>>b;
//     int c;
//     cout<<"Enter number C: ";
//     cin>>c;
//     if ( a<c && b<c){
//          cout<<"C ";
//     }
//     else if (a<b && b>c){
//         cout<<"B";
//     }
//     else {
//         cout<<"A"; 
//     }
// }


//                      ternary operators
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter n: ";
//     cin>> n;
//     (n%2==0) ? cout<<"even" : cout<<"odd";
// } 

//                              switch operator
#include<iostream>
using namespace std;
int main(){
    int n1;
    cout<<"enter n1: ";
    cin>>n1;
    char op; 
    cout<<"enter op: ";
    cin>>op;
    int n2;
    cout<<"enter n2: ";
    cin>>n2; 
    switch (op){
        case '+':
            cout<< n1+n2 <<endl;
            break;
        case '-':
            cout<< n1-n2 <<endl;
            break;
        case '/':
            cout<< n1/n2 <<endl;
            break;
        case '*':
            cout<< n1*n2 <<endl;
            break;
        default:
            cout<<"invalid operator";
    }

    
}
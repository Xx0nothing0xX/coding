// #include<iostream>
// using namespace std;
// void print(int n){
//     if (n==0) return;
//     cout<<n<<endl;
//     print(n-1);
// }
// int main(){
//     cout<<"Enter a number: ";
//     int n;
//     cin>>n;
//     print(n);
// }


// #include<iostream>
// using namespace std;
// int sum(int n){
//     if (n==1) return 1;
//     return n+sum(n-1);
// }
// int main(){
//     cout<<"Enter a number: ";
//     int n;
//     cin>>n;
//     cout<<sum(n);
// }



#include<iostream>
using namespace std;
int fibo(int n){
    if(n==1||n==2) return 1;
    return fibo(n-1)+fibo(n-2);
}
int main(){
    cout<<"Enter a number: ";
    int n;
    cin>>n;
    cout<<fibo(n);
}
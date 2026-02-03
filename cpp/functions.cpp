// #include<iostream>
// using namespace std;
// void f1(){
//     cout<<"first function";
// }
// int main(){
//     f1(); 
// }

// #include<iostream>
// using namespace std;
// int sum(int a, int b){
//     return a+b;
// }
// int main(){
//     cout<<sum(2, 5); 
// }

/*      default functions in cmath library
    min(), max(), pow()
    sqrt(), cbrt()

*/ 

// #include<iostream>
// #include<cmath>         //includes libraries
// using namespace std;
// int main(){
//     cout<< sqrt(25);
// }



#include<iostream>
using namespace std;
int fac(int n){
    int op=1;
    for (int i=1; i<=n; i++){
        op*=i;
    }
    return op;
}
int com(int x,int y){
    return fac(x)/(fac(y)*fac(x-y));
}
int main(){
    int a;
    cout<<"Enter number: ";
    cin>>a;
    for( int i=0; i<=a; i++){
        for(int j=1; j<=a-i; j++) cout<<" ";
        for(int j=0; j<=i ; j++){
            cout<<com(i,j)<<" ";
        } 
        cout<<endl;
    }
}



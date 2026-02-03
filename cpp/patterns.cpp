// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int sum=0;
//     while (n!=0){
//         sum += n%10;
//         n/=10;
//     }
//     cout<<sum;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     cin>>a;
//     int n=a;
//     int rev=0;
//     while (n>0){
//         rev*=10;
//         rev+= n%10;
//         n/=10;
//     }
//     cout<< rev+a;
// }


// #include<iostream>
// using namespace std; 
// int main(){
//     int a;
//     cin>>a;
//     int f=1;
//     while (a>0){
//         f*=a;
//         a--;
//     }
//     cout<<f;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     cout<<"Enter number: ";
//     cin>>a;
//     for( int i=1; i<=a; i++){
//         if( i==(a+1)/2){
//             for(int j=1; j<=a; j++){
//                 cout<<"* ";
//             }
//             cout<<endl;
//         }
//         else{
//             for(int j=1; j<=a; j++){
//             if (j==(a+1)/2){
//                 cout<<"* ";
//             }
//             else cout<<"# ";
//         }
//         cout<<endl;
//         }
//     }
    
// }


//                                                  alternatively
// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     cout<<"Enter number: ";
//     cin>>a;
//     for( int i=1; i<=a; i++){
//             for(int j=1; j<=a; j++){
//                 if (i==(a+1)/2 || j==(a+1)/2 ) cout<<"* ";
//                 else cout<<"# ";
//             }
//             cout<<endl;
//     }
// }



// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     cout<<"Enter number: ";
//     cin>>a;
//     for( int i=1; i<=a; i++){
//             for(int j=1; j<=a; j++){
//                 if (i==1 || j==1 || i==a || j==a) cout<<"* ";
//                 else cout<<"  ";
//             }
//             cout<<endl;     
//         }
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     cout<<"Enter number: ";
//     cin>>a;
//     for( int i=1; i<=a; i++){
//             for(int j=1; j<=a; j++){
//                 if (i==j || (j)==(a-i+1)) cout<<"* ";
//                 else cout<<"  ";
//             }
//             cout<<endl;     
//         }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     cout<<"Enter number: ";
//     cin>>a;
//     for( int i=1; i<=a; i++){
//             for(int j=1; j<=a; j++){
//                 if (j>a-i) cout<<"* ";
//                 else cout<<"  ";
//             }
//             cout<<endl;     
//         }
// }


//                                          alternatively
// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     cout<<"Enter number: ";
//     cin>>a;
//     for( int i=1; i<=a; i++){
//             for(int j=1; j<=a-i; j++) cout<<"  ";
//             for (int j=1; j<=i; j++) cout<<"* ";
//             cout<<endl;     
//         }
// }


#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter number: ";
    cin>>a;
    for( int i=1; i<=a; i++){
            for(int j=1; j<=a-i; j++) cout<<"# ";
            for (int j=1; j<=i ; j++) cout<<"* ";
            for (int j=1; j<=i-1 ; j++) cout<<"* ";
            for(int j=1; j<=a-i; j++) cout<<"# ";
            cout<<endl;
        }
}
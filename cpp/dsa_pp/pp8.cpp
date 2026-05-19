#include<iostream>
using namespace std;    

int NnumbersSum(int N){

	if (N==0) return 0;
    return N+NnumbersSum(N-1) ;


}
int main(){
    int k ;
    cout<< "Enter::";
    cin>>k;
    cout<<NnumbersSum(k);

}
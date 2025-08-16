#include<iostream>
using namespace std;
//Iterative
int factorialIter(int n);
// Recursive
int factorialRec(int n);
int main(){
    int n=5;
    int iterative=factorialIter(n);
    int Recursive=factorialRec(n);
    // bonus
    cout<<"5!=";
    for(int i=n;i>0;i--){
        cout<<i;
        if(i>1) cout<<"* ";
    }
    cout<<endl;
    cout<<n<<"! iterative="<<iterative<<endl;
    cout<<n<<"! Recursive="<<Recursive<<endl;
    return 0;
}
int factorialIter(int n){
    int total=n;
    for(int i=n-1;i>0;i--){
        total*=i;
    }
    return total;
}
int factorialRec(int n){
    if(n==0) return 1;
    return n*factorialRec(n-1);
}
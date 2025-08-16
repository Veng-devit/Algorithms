#include<iostream>
using namespace std;
bool isPrime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0) return false;
    }
    return true;

}
int main (){
    int num;
    do{
        cout<<"Enter an positive number:";
        cin>>num;
        if(num<0) cout<<"Enter the number that greater than 0"<<endl;
    }while(num<=0);
    cout<<"Prime number up to "<<num<<endl;
    for(int i=2;i<=num;i++){
        if(isPrime(i)) cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}
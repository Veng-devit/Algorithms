#include<iostream>
using namespace std;
int add(int a, int b){
    return a+b;
}
double add(double a, double b){
    return a+b;
}
int subtract(int a, int b){
    return a-b;
}
int multiply(int a, int b)
{
    return a*b;
}
double divide(int a, int b = 1)
{
    if(b==0) return 0.0;
    return (double)a / b;
}
int main(){
    cout<<"add(5, 3)="<<add(5, 3)<<endl;
    cout<<"add(2.5, 4.2)="<<add(2.5, 4.2)<<endl;
    cout<<"subtract(10, 4)="<<subtract(10, 4)<<endl;
    cout<<"multiply(7, 6)="<<multiply(7, 6)<<endl;
    cout<<"divide(20, 4)="<<divide(20, 4)<<endl;
    cout<<"divide(9)="<<divide(9)<<endl;
    return 0;
}
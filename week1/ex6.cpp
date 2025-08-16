#include<iostream>
using namespace std;
int main(){
    char grade;
    cout<<"Enter Your grade:";
    cin>>grade;
    switch(grade){
        case 'A': cout<<"Excellent"; break;
        case 'B': cout<<"Good"; break;
        case 'C': cout<<"Fair"; break;
        case 'D': cout<<"Fail"; break;
        default : cout<<"Invalid grade";
        return 0;
    }
}
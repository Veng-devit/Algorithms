#include<iostream>
using namespace std;
int main(){
    int studentCount = 30;
    float temperature = 36.6;
    char grade = 'A';
    bool passed = true;
    cout<<"Student Count:"<<studentCount<<endl;
    cout<<"Temperature:"<<temperature<<endl;
    cout<<"Grade:"<<grade<<endl;
    cout<<"Passed:"<<(passed? "true":"false")<<endl;
    return 0;
}
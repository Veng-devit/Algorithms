#include<iostream>
using namespace std;
int main(){
    int studentScore=90;
    string StudentRecord="Devit Veng";
    float student_score=90.5;
    const int MAX_BUFFER_SIZE=500;
    cout<<"studentScore (camelCase):"<<studentScore<<endl;
    cout<<"StudentRecord (PascalCase):"<<StudentRecord<<endl;
    cout<<"student_score (snake_case):"<<student_score<<endl;
    cout<<"MAX_BUFFER_SIZE (SCREAMING_SNAKE_CASE):"<<MAX_BUFFER_SIZE<<endl;
    return 0;

}
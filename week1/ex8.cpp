#include<iostream>
using namespace std;
void greeting(){
    string name;
    cout<<"Please enter your name:";
    getline(cin >> ws, name);
    cout<<"Hello my name is "<<name<<"! nice to meet you"<<endl;
}
int factorial(int num){
    if(num<0) return -1;
    if(num==0||num==1) return 1;
    return num*factorial(num-1);
}
int main(){
    int choice;
    do{
        cout<<"----menu----"<<endl;
        cout<<"1. Greet"<<endl;
        cout<<"2. Calculate factorial"<<endl;
        cout<<"0. Exit"<<endl;
        cout<<"Enter your choice:";
        cin>>choice;
        if(choice==1){
            greeting();
        }
        else if (choice==2){
            int n;
            cout<<"Input an integer number:";
            cin>>n;
            int result=factorial(n);
            if(result==-1) cout<<"we can not calculate factorial in negative number"<<endl;
            else cout<<n<<"!="<<result<<endl;
        }
        else if(choice==0) cout<<"Good Bye!! Have a good day"<<endl;
        else cout<<"Invalid choice! please try again"<<endl;
    }while(choice!=0);
    return 0;
}
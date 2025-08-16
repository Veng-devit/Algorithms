#include<iostream>
using namespace std;
double computeAverage(int array[], int size);
int findMin(int array[], int size);
int findMax(int array[], int size);
int main(){
    int size;
    cout<<"how many number that you want in array?"<<endl;
    cout<<"input size:";
    cin>>size;
    int array[size];
    cout<<"Input "<<size<<" integer number:";
    for(int i=0;i<size;i++){
        cin>>array[i];
    }
    double result=computeAverage(array, size);
    int min=findMin(array, size);
    int max=findMax(array, size);
    cout<<"The average of number="<<result<<endl;
    cout<<"Minimun Number="<<min<<endl;
    cout<<"Maximum Number="<<max<<endl;
    return 0;
}
double computeAverage(int array[], int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=array[i];
    }
    return static_cast<double>(sum) / size;
}
int findMin(int array[], int size){
    int min=array[0];
    for(int i=1;i<size;i++){
        if(array[i]<min) min=array[i];
    }
    return min;
}
int findMax(int array[], int size){
    int max=array[0];
    for(int i=1;i<size;i++){
        if(array[i]>max) max=array[i];
    }
    return max;
}
#include<iostream>
using namespace std;
int sumRow(const int m[][3], int r);
int sumCol(const int m[][3], int c);
int main(){
    int mat[3][3] = { 
        { 1, 2, 3 },
        { 4, 5, 6 }, 
        { 7, 8, 9 } 
    };
    for(int row=0;row<3;row++){
        cout<<"sum of row "<<(row+1)<<"="<<sumRow(mat, row)<<endl;
    }
    for(int col=0;col<3;col++){
        cout<<"sum of col "<<(col+1)<<"="<<sumCol(mat, col)<<endl;
    }
    return 0;
}
int sumRow(const int m[][3], int r){
    int sum=0;
    for(int col=0;col<3;col++){
        sum+=m[r][col];
    }
    return sum;
}
int sumCol(const int m[][3], int c){
    int sum=0;
    for(int row=0;row<3;row++){
        sum+=m[row][c];
    }
    return sum;
}
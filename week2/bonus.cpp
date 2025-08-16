#include<iostream>
using namespace std;
void multiple(int m1[2][3],int m2[3][2], int matrix[2][2]);
void printMatrix(int row, int col, int matrix[][2]);
int main(){
    int array1[6];
    int array2[6];
    cout<<"Input 6 integer number for matrix1:";
    for(int i=0;i<6;i++){
        cin>>array1[i];
    }
    cout<<endl;
    cout<<"Input 6 integer number for matrix2:";
    for(int i=0;i<6;i++){
        cin>>array2[i];
    }
    cout<<endl;
    int m1[2][3];
    int m2[3][2];
    cout<<"matrix 1(2×3):"<<endl;
    int index1=0;
    for(int r=0;r<2;r++){
        for(int c=0;c<3;c++){
            m1[r][c]=array1[index1];
            index1++;
            cout<<m1[r][c]<<" ";
        }
        cout<<endl;
    }
    int index2=0;
    cout<<"matrix 2(3×2):"<<endl;
    for(int r=0;r<3;r++){
        for(int c=0;c<2;c++){
            m2[r][c]=array2[index2];
            index2++;
            cout<<m2[r][c]<<" ";
        }
        cout<<endl;
    }
    int matrix[2][2]={0};
    multiple(m1,m2,matrix);
    printMatrix(2,2,matrix);
    return 0;
}
void multiple(int m1[2][3],int m2[3][2], int matrix[2][2]){
    for(int r=0;r<2;r++){
        for(int c=0;c<2;c++){
            matrix[r][c]=0;
            for(int k=0;k<3;k++){
                matrix[r][c]+=m1[r][k]*m2[k][c];
            }
        }
    }
}
void printMatrix(int row, int col, int matrix[][2]){
    cout<<"Mutiple result(2×2):"<<endl;
    for(int r=0;r<row;r++){
        for(int c=0;c<col;c++){
            cout<<matrix[r][c]<<" ";
        }
        cout<<endl;
    }
}
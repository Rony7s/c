//5. Write a C++ program to find the highest rows value in n*n matrix
#include<iostream>
using namespace std;

int main(){
    int i, j;
    int r1, c1;
    cout<<"Enter Matrix row and col"<<endl;
    cin >> r1 >> c1;

    int m1[r1][c1];


    for(i=0; i<r1; i++){
        for(j=0; j<c1; j++){
            cout<<"Enter value row "<<i<<" Col "<<j<<endl;
            cin >> m1[i][j];
        }
    }

    int rowSum[r1];

    for(i=0; i<r1; i++){
        rowSum[i] = 0;
            for(j=0; j<c1; j++){
                rowSum[i]+=m1[i][j];
        }
    }

    int high = rowSum[0];

        for(j=0; j<r1-1; j++){
            if(high<rowSum[j+1]){
                high = rowSum[j+1];
            }

    }



    cout <<"The highest row value is "<< high <<endl;


    return 0;
}

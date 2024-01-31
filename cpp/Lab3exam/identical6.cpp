// 6 Write a C++ program to check a square matrix is identical or not.
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

    int c = 0;



    for(i=0; i<r1; i++){
        for(j=0; j<c1; j++){
            if(i==j && m1[i][i] == 1){
                c++;
            }
            if(i!=j && m1[i][j] == 0){
                c++;
            }
        }
    }



    if(c== r1*c1 && r1==c1){
        cout <<"Yes"<<endl;
    }else{
        cout <<"No"<<endl;
    }




    return 0;
}

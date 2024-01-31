//Question 02 Write a C++ program to print the multiplication table of 1 to N.
#include<iostream>
using namespace std;

void multiplication(int n){
    for(int a=1; a<=n; a++){
        for(int i=1; i<11; i++){
            cout<<a<<" x "<<i<<" = "<<i*a<<endl;
        }
    }

}

int main(){
    int n;
    cout<<"Enter Value multiplication N"<<endl;
    cin >>n;

    multiplication(n);

    return 0;
}

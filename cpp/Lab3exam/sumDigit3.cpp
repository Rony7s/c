//Question 03 Write a C++ program to sum the digit of a number using recursion.
#include<iostream>
using namespace std;

int sumDigit(int n){
    if(n<10){
        return n;
    }
     return n%10 + sumDigit(n/10);

}

int main(){
    int n;
    cout<<"Enter Value N"<<endl;
    cin >>n;

    int r = sumDigit(n);

    cout<<"The sum the digit of a number is "<< r <<endl;

    return 0;
}

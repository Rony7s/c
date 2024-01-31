//Question 01 Develop a simple calculator using the concept of C++.
#include<iostream>
using namespace std;

float cal(float a, float b, char c){
    float r;
    switch(c){
        case '+':
        r = a + b;
        break;
        case '-':
        r = a - b;
        break;

        case '*':
        r = a * b;
        break;
        case '/':
        r = a / b;
        break;
    }
    return r;
}

int main(){
    float a, b;

    char c;
    cout<<"Enter Value a and b"<<endl;
    cin >>a>>b;
    cout<<"Enter Operator"<<endl;
    cin >>c;


    cout << cal(a,b,c)<<endl;
    return 0;
}

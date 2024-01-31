// 4 Write a C++ program to find the second largest value of an array.
#include<iostream>
using namespace std;

int main(){
    int n = 5;
    int arr1[n] = {34,45,35,50,37};

    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){

            if(arr1[j]>arr1[j+1]){
                int t = arr1[j];
                arr1[j] = arr1[j+1];
                arr1[j+1] = t;

            }
        }
    }

    cout<<"The second largest value of an array is "<< arr1[1] <<endl;

    return 0;
}

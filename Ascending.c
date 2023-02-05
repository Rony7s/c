#include <stdio.h>
int main(){
//given array
int a[5] = {5, 2, 8, 7, 1};
int x = 0;


//Showing original array
printf("Original array: \n");
for (int i = 0; i < 5; i++) {
printf("%d ", a[i]);
}
//Sort the array in ascending order
for (int i = 0; i < 5; i++) {
for (int j = i+1; j < 5; j++) {
if(a[i] > a[j]) {
x = a[i];
a[i] = a[j];
a[j] = x;
}
}
}
//Array after sorting
printf("\nArray sorted in ascending order: \n");
for (int i = 0; i < 5; i++) {
printf("%d ", a[i]);
}
return 0;
}

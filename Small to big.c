#include <stdio.h>
int main(){
     int n;
     scanf("%d", &n);
     int a[n];
     //input numbers array
      for (int i = 0; i < n; i++) {
           scanf("%d", &a[i]);
       }
     //Sort the array in ascending order
 int x;
for (int i = 0; i < n; i++) {
     for (int j = i+1; j < n; j++) {
           if(a[i] > a[j]) {
            x = a[i];
            a[i] = a[j];
            a[j] = x;
           }
       }
}
//Array after sorting
for (int i = 0; i < n; i++) {
      printf("%d ", a[i]);
}
   return 0;
}

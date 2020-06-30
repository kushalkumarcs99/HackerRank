#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int nth(int n, int a, int b, int c) {
  //Write your code here.
  if(n==1)
  return 1;
  if(n==2)
  return 2;
  if(n==3)
  return 3;
  else
  return nth(n-1,a,b,c)+nth(n-2,a,b,c)+nth(n-3,a,b,c); 
}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = nth(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}


// Write a C Program to Display Fibonacci Sequence.
// Sample Input
// 10
// Sample Output
// 0 1 1 2 3 5 8 13 21 34

#include <stdio.h>
int main() {

  int i, number;

  // initialize first and second terms
  int t1 = 0, t2 = 1;

  // initialize the next term (3rd term)
  int t3 = t1 + t2;

  // get no. of terms from user
  printf("Enter the number of terms: ");
  scanf("%d", &number);

  printf("Fibonacci Series: %d, %d, ", t1, t2);

  // print 3rd to nth terms
  for (i = 3; i <= number; ++i) {
    printf("%d, ", t3);
    t1 = t2;
    t2 = t3;
    t3 = t1 + t2;
  }
  
  

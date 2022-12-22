// Write a C program, to find transpose of a matrix.
// The output of given problem statement will be transpose of the given matrix.
// Sample Input
// 3
// 4
// 1 4 3 5
// 5 6 7 4
// 2 9 8 3
// Sample Output
// 1 5 2
// 4 6 9
// 3 7 8
// 5 4 3</stdio.h>

#include <stdio.h>
int main() {
  int a[5][5], transpose[5][5], r, c;
  printf("Enter rows and columns: ");
  scanf("%d %d", &r, &c);

  printf("\nEnter matrix elements:\n");
  for (int i = 0; i < r; ++i)
  for (int j = 0; j < c; ++j) {
    printf("Enter element a%d%d: ", i + 1, j + 1);
    scanf("%d", &a[i][j]);
  }

  printf("\nEntered matrix: \n");
  for (int i = 0; i < r; ++i)
  for (int j = 0; j < c; ++j) {
    printf("%d  ", a[i][j]);
    if (j == c - 1)
    printf("\n");
  }

  // computing 
  for (int i = 0; i < r; ++i)
  for (int j = 0; j < c; ++j) {
    transpose[j][i] = a[i][j];
  }

  // printing 
  printf("\nTranspose of the matrix:\n");
  for (int i = 0; i < c; ++i)
  for (int j = 0; j < r; ++j) {
    printf("%d  ", transpose[i][j]);
    if (j == r - 1)
    printf("\n");
  }
  return 0;
}


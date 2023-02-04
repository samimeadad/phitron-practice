#include <stdio.h>

int findSum(int n) {
  int sum = 0;
  for (int i = 1; i <= n; i++) {
    if (i % 4 == 1) {
      sum += i;
    } else if (i % 4 == 2) {
      sum += i;
    } else if (i % 4 == 3) {
      sum -= i;
    } else {
      sum -= i;
    }
  }
  return sum;
}

int main() {
  int n;
  printf("Enter the value of N: ");
  scanf("%d", &n);
  printf("The sum of the Nth element is: %d\n", findSum(n));
  return 0;
}

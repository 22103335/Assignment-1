#include <stdio.h>
int main() {
  int n, sum = 0;
  printf("Enter the number of elements ");
  scanf("%d", &n);
  int arr[n];
  printf("Enter the elements\n");
  for (int i = 0; i < n; i++)
    scanf("%d", &arr[i]);
  for (int i = 0; i < n; i++)
    sum += arr[i];
  printf("Average of elements is %f", (float)sum / n);
}
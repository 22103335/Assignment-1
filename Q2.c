#include <stdio.h>
void main() {
    int n;
    printf("Enter the number of elements ");
    scanf("%d",&n);
    int a[n];
    float s = 0;
    for (int i = 0; i < n; i++)
        s += i;
    printf("The average is %d", s / n);
}
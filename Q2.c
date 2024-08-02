#include <stdio.h>
void main() {
    int m; 
    printf("Enter the number of rows ");
    scanf("%d", &m);
    int a[m][m];
    for (int i = 0; i < m; i++)
        for (int j = 0; j < m; j++) {
            printf("Enter the element ");
            scanf("%d", &a[i][j]);
        }
    for (int i = 0; i < m; i++)
        for (int j = i + 1; j < m; j++)
            (a[i][j] += a[j][i]), (a[j][i] = a[i][j] - a[j][i]), (a[i][j] -= a[j][i]);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++)
            printf("%d ", a[i][j]);
            printf("\n");
    }
}
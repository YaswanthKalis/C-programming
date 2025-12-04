#include <stdio.h>
int main() {
    int r, c, i, j;
    scanf("%d %d", &r, &c);

    int a[100][100], t[100][100];

    
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            t[j][i] = a[i][j];
        }
    }

    
    for(i = 0; i < c; i++) {
        for(j = 0; j < r; j++) {
            printf("%d ", t[i][j]);
        }
        printf("\n");
    }

    return 0;
}

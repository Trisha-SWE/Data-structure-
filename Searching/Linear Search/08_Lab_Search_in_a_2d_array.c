#include <stdio.h>

void search2DArray(int rows, int cols, int matrix[rows][cols], int target) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] == target) {
                printf("Element %d found at position (%d, %d)\n", target, i, j);
                return;
            }
        }
    }
    printf("Element %d not found\n", target);
}

int main() {
    int rows, cols, target;
    
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    
    int matrix[rows][cols];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    printf("Enter the target element: ");
    scanf("%d", &target);
    
    search2DArray(rows, cols, matrix, target);
    
    return 0;
}

#include <stdio.h>
// Rotate image
void rotate(int **matrix, int n, int *colSize)
{
    // Transpose
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
    // Reverse
    for (int i = 0; i < n; i++)
    {
        int left = 0, right = n - 1;
        while (left < right)
        {
            int temp = matrix[i][left];
            matrix[i][left] = matrix[i][right];
            matrix[i][right] = temp;
            left++;
            right--;
        }
    }
}

int main()
{
    int n = 3;
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int *matrix[3];
    int col = 3;

    for (int i = 0; i < n; i++)
        matrix[i] = arr[i];

    rotate(matrix, n, &col);

    printf("Rotated Matrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

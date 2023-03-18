//Write a C code to find the maximum element in each row of the 3 X 3 matrix
imclude<stdio.h>
int main()
{
    int matrix[3][3] = {{1, 2, 3},
                        {4, 5, 6},
                        {7, 8, 9}};
    int max;

    for (int i = 0; i < 3; i++) {
        max = matrix[i][0];
        for (int j = 1; j < 3; j++) {
            if (matrix[i][j] > max) {
                max = matrix[i][j];
            }
        }
        printf("The maximum element in row %d is %d\n", i+1, max);
    }

  return 0;
}

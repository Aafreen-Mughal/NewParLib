
#define N 10
void matrixMultiply(double A[N][N], double B[N][N], double C[N][N]) {
    int n = N;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            C[i][j] = 0;
            for (int k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
}

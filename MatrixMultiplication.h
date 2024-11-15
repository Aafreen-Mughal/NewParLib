#include<iostream>
using namespace std;
void matrixMultiply(const double** A, double** B, double** C) {
    int n = A.size();
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            C[i][j] = 0;
            for (int k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
}

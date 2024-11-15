#include <iostream>
using namespace std;
#define N 10
void luDecomposition(double A[N][N],double L[N][N],double [N][N]) {
    int n = A.size();
    for (int i = 0; i < n; i++) {
        for (int k = i; k < n; k++) {
            U[i][k] = A[i][k];
            for (int j = 0; j < i; j++)
                U[i][k] -= L[i][j] * U[j][k];
        }
        for (int k = i; k < n; k++) {
            if (i == k)
                L[i][i] = 1;
            else {
                L[k][i] = A[k][i];
                for (int j = 0; j < i; j++)
                    L[k][i] -= L[k][j] * U[j][i];
                L[k][i] /= U[i][i];
            }
        }
    }
}



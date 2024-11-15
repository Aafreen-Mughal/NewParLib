#include <iostream>
using namespace std;
#define N 10
void matrixTranspose(double A[N][N],double T[N][N]) {
    int n = A.size();
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            T[j][i] = A[i][j];
}


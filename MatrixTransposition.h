#include <iostream>
using namespace std;
void matrixTranspose(double** A,double** T) {
    int n = A.size();
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            T[j][i] = A[i][j];
}


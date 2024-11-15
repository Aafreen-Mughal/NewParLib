#include <iostream>
#include <cmath>
using namespace std;
bool choleskyDecomposition(double** A,double** L) {
    int n = A.size();
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            double sum = 0;
            for (int k = 0; k < j; k++)
                sum += L[i][k] * L[j][k];
            if (i == j)
                L[i][j] = std::sqrt(A[i][i] - sum);
            else
                L[i][j] = (A[i][j] - sum) / L[j][j];
        }
        if (L[i][i] <= 0) return false;
    }
    return true;
}

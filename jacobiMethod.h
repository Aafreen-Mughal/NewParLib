#include <iostream>
#include <cmath>
using namespace std;
bool jacobi(double** A, double** x, int max_iter = 100, double tol = 1e-6) {
    int n = A.size();
    std::vector<double> x_old(n);
    for (int iter = 0; iter < max_iter; iter++) {
        x_old = x;
        for (int i = 0; i < n; i++) {
            double sum = b[i];
            for (int j = 0; j < n; j++)
                if (j != i)
                    sum -= A[i][j] * x_old[j];
            x[i] = sum / A[i][i];
        }
        double error = 0;
        for (int i = 0; i < n; i++)
            error += std::abs(x[i] - x_old[i]);
        if (error < tol) return true;
    }
    return false;
}

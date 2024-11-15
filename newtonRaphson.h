#include <iostream>
#include <cmath>
using namespace std;
double newtonRaphson(double (*f)(double), double (*f_prime)(double), double x0, int max_iter = 100, double tol = 1e-6) {
    double x = x0;
    for (int i = 0; i < max_iter; i++) {
        double fx = f(x);
        double fpx = f_prime(x);
        if (std::abs(fpx) < tol) return x; // Avoid division by zero
        double x_new = x - fx / fpx;
        if (std::abs(x_new - x) < tol) return x_new;
        x = x_new;
    }
    return x;
}

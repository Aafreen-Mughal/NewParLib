#include <iostream>
#include <cmath>
using namespace std;
double bisection(double (*f)(double), double a, double b, int max_iter = 100, double tol = 1e-6) {
    double mid;
    for (int i = 0; i < max_iter; i++) {
        mid = (a + b) / 2;
        if (std::abs(f(mid)) < tol) return mid;
        if (f(a) * f(mid) < 0) b = mid;
        else a = mid;
    }
    return mid;
}

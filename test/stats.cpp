#include <iostream>
#include "../stats.cpp" 
using namespace std;


int main() {
    
    float arr[] = {1.2, 2.5, 3.1, 4.8, 5.3};
    int len = sizeof(arr) / sizeof(arr[0]);

    // Test arrayMean
    float mean = mlb::arrayMean(arr, len);
    cout << "Mean: " << mean << endl;

    // Test arrayMedian
    float median = mlb::arrayMedian(arr, len);
    cout << "Median: " << median << endl;

    // Test arrayMode
    float mode = mlb::arrayMode(arr, len);
    cout << "Mode: " << mode << endl;

    // Test normalPDF
    float x = 2.0;
    float pdf = mlb::normalPDF(x, 0.0, 1.0);
    cout << "Normal PDF at x=" << x << ": " << pdf << endl;

    // Test exponentialPDF
    float lambda = 0.5;
    x = 1.0;
    float exp_pdf = mlb::exponentialPDF(x, lambda);
    cout << "Exponential PDF at x=" << x << ": " << exp_pdf << endl;

    // Test binomialPMF
    int k = 2;
    int n = 5;
    float p = 0.3;
    float binomial_pmf = mlb::binomialPMF(k, n, p);
    cout << "Binomial PMF at k=" << k << ", n=" << n << ", p=" << p << ": " << binomial_pmf << endl;

    return 0;
}

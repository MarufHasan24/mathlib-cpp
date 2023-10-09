#include "../stats.cpp"
#include "../scripts/tester.cpp"

using namespace std;

int main()
{

    float arr[] = {1.2, 2.5, 3.1, 4.8, 5.3};
    int len = sizeof(arr) / sizeof(arr[0]);

    // Test arrayMean
    float mean = mlb::arrayMean(arr, len);

    // Test arrayMedian
    float median = mlb::arrayMedian(arr, len);

    // Test arrayMode
    float mode = mlb::arrayMode(arr, len);

    // Test normalPDF
    float x = 2.0;
    float pdf = mlb::normalPDF(x, 0.0, 1.0);

    // Test exponentialPDF
    float lambda = 0.5;
    x = 1.0;
    float exp_pdf = mlb::exponentialPDF(x, lambda);
    cout << median << mode << endl;
    // Test binomialPMF
    int k = 2;
    int n = 5;
    float p = 0.3;
    float binomial_pmf = mlb::binomialPMF(k, n, p);
    tester::describe("Testing stats.cpp", [&mean, &mode, &median, &pdf, &exp_pdf, &binomial_pmf]()
                     {
        tester::toClose("Mean", 3.38, mean);
        tester::toClose("Median", 3.1, median);
        tester::toClose("Mode", 1.2, mode);
        tester::toClose("Normal PDF", 0.05399096651318806, pdf);
        tester::toClose("Exponential PDF", 0.3032653298563167, exp_pdf);
        tester::toClose("Binomial PMF", 0.3087, binomial_pmf); });
    return 0;
}

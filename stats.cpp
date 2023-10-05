#include <cmath>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

namespace mlb {
    
    float arrayMean(float arr[], int len) {
        float sum = 0.0;
        for (int i = 0; i < len; i++) {
            sum += arr[i];
        }
        return sum / len;
    }

    float arrayMedian(float arr[], int len) {
        vector<float> sortedArr(arr, arr + len);
        sort(sortedArr.begin(), sortedArr.end());
        
        if (len % 2 == 0) {
            float middle1 = sortedArr[len / 2 - 1];
            float middle2 = sortedArr[len / 2];
            return (middle1 + middle2) / 2.0;
        } 
        else {
            return sortedArr[len / 2];
        }
    }

    float arrayMode(float arr[], int len) {
        unordered_map<float, int> countMap;
        int maxCount = 0;
        float mode = 0.0;

        for (int i = 0; i < len; i++) {
            countMap[arr[i]]++;
            if (countMap[arr[i]] > maxCount) {
                maxCount = countMap[arr[i]];
                mode = arr[i];
            }
        }

        return mode;
    }

    float normalPDF(float x, float mean, float stddev) {
        float exponent = -(pow(x - mean, 2) / (2 * pow(stddev, 2)));
        return (1 / (stddev * sqrt(2 * M_PI))) * exp(exponent);
    }

    float exponentialPDF(float x, float lambda) {
        if (x >= 0) {
            return lambda * exp(-lambda * x);
        } 
        else {
            return 0.0; 
        }
    }

    float binomialPMF(int k, int n, float p) {
        if (k >= 0 && k <= n) {
            float binomialCoefficient = tgamma(n + 1) / (tgamma(k + 1) * tgamma(n - k + 1));
            return binomialCoefficient * pow(p, k) * pow(1 - p, n - k);
        } 
        else {
            return 0.0; 
        }
    }
}

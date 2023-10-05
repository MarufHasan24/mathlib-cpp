# Statistical Operations

This C++ file provides various functions for staticstics like calculating Mean, Median, Mode, NormalPDF, BinomialPMF and ExponentialPDF. This file use following header files:

- 'cmath'
- 'vector'
- 'algorithm'
- 'unordered_map'

## Functions

### 'float arrayMean(float arr[], int len)'
This function returns a decimal value equivalent to the mean of all the decimal numbers in given array

**Example**
```cpp
    float arr[] = {1.2, 2.5, 3.1, 4.8, 5.3};
    int len = sizeof(arr) / sizeof(arr[0]);
    float mean = mlb::arrayMean(arr, len);
```

### 'float arrayMedian(float arr[], int len)'
This function returns a decimal value equivalent to median of all the decimal numbers in given array

**Example**
```cpp
    float arr[] = {1.2, 2.5, 3.1, 4.8, 5.3};
    int len = sizeof(arr) / sizeof(arr[0]);
    float median = mlb::arrayMedian(arr, len);
```

### 'float arrayMode(float arr[], int len)'
This function returns the mode(number with maximum frequency) in given array

**Example**
```cpp
    float arr[] = {1.2, 2.5, 3.1, 4.8, 5.3};
    int len = sizeof(arr) / sizeof(arr[0]);
    float median = mlb::arrayMode(arr, len);
```

### 'float normalPDF(float x, float mean, float stddev)'
This function give Normal Probability Density function for given x, mean and standard deviation

**Parameters**
 - 'x' : The value for which you want to calculate the probability density
 - 'mean' : The mean (average) of the normal distribution
 - 'stddev' : The standard deviation of the normal distribution

**Formula**
 : (1 / (stddev * sqrt(2 * π))) * exp(-((x - mean)² / (2 * stddev²)))

**Example**
```cpp
   float x = 2.0;
   float pdf = mlb::normalPDF(x, 0.0, 1.0);
```

### 'float exponentialPDF(float x, float lambda)'
This function returns Exponential Probability Density function for given x and lambda

**Parameters**
 - 'x' : The value for which you want to calculate the probability density
 - 'lambda': The rate parameter of the exponential distribution

**Formula**
 : lambda * exp(-lambda * x)

**Example**
```cpp
   float lambda = 0.5;
   x = 1.0;
   float exp_pdf = mlb::exponentialPDF(x, lambda);
```

### 'float binomialPMF(int k, int n, float p)'
This function returns Binomial Probability Mass function for given inputs

**Parameters**
 - 'k' : The number of successful events you want to find the probability for
 - 'n' : The total number of trials
 - 'p' : The probability of success on a single trial

**Formula**
 : (n C k) * p^k * (1 - p)^(n - k)

**Example**
```cpp
   int k = 2;
   int n = 5;
   float p = 0.3;
   float binomial_pmf = mlb::binomialPMF(k, n, p);
```

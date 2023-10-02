#include <cmath>
#include <bits/stdc++.h>

namespace mathlib {
    // Function to add two or more numbers
    double add(int a[], int len){
        double sum = 0;
        for(int i = 0; i < len; i++){
            sum += a[i];
        }
        return sum;
    }
    // Function to subtract between two or more numbers
    double sub(int a[], int len){
        double sum = 0;
        for(int i = 0; i < len; i++){
            sum -= a[i];
        }
        return sum;
    }
    // Function to multiply two or more numbers
    double mul(int a[], int len){
        double sum = 1;
        for(int i = 0; i < len; i++){
            sum *= a[i];
        }
        return sum;
    }
    // Function to divide between two or more numbers
    float div(int a[], int len){
        float sum = 1;
        for(int i = 0; i < len; i++){
            sum /= a[i];
        }
        return sum;
    }
    // Function to find average of two or more numbers
    float avg(int a[], int len){
        float sum = 0;
        for(int i = 0; i < len; i++){
            sum += a[i];
        }
        return sum/len;
    }
    // Function to find log of x to for custom base
    float logx(int base, int x){
        return log(x)/log(base);
    }
    // Function to find root of x to for custom base
    float rootx(int base, int x){
        return pow(x, 1.0/base);
    }
    // Function to generate random number between min and max
    int random(int min, int max){
        if(min > max){
            int temp = min;
            min = max;
            max = temp;
        }
        return rand()%(max-min + 1) + min;
    }
    // Function to find limit of a function
    double limit(int tt, double (*fc)(double))
    {
        int n;
        double a = pow(10,-7);
        double lim = (fc(tt - a) + fc(tt + a)) / 2;
        return lim;
    }
    // Function to find factorial of a number
    double fact(int n){
        if(n == 0){
            return 1;
        }
        return n*fact(n-1);
    }
     /* Function to find 2 linear equations solution from a, b, c of both equations. like ax + by = c */
    float* linearEq(float x[], float y[]){
        static float result[2];
        float a1 = x[0], b1 = x[1], c1 = x[2], a2 = y[0], b2 = y[1], c2 = y[2];
        result[0] = (c1 * b2 - c2 * b1) / (a1 * b2 - b1 * a2);
        result[1] = (a1 * c2 - a2 * c1) / (a1 * b2 - a2 * b1);
        return result;
    }
     /* Function to find quadratic equation solution from a, b, c of equation. like ax^2 + bx + c = 0 */
    float* quadEq(float a, float b, float c){
        float d = pow(b, 2) - 4 * a * c;
        static float result[2];
        if(d > 0){
            result[0] = (-b + sqrt(d)) / (2 * a);
            result[1] = (-b - sqrt(d)) / (2 * a);
        }else if(d == 0){
            result[0] = result[1] = -b / (2 * a);
        }else{
            result[0] = result[1] = nan("");
        }
        return result;
    }
    // check if a number is prime or not
    bool isPrime(int n){
        if(n <= 1){
            return false;
        }
        else {
            for(int i = 2; i <= n; i++){
                if(n%i == 0){
                    return false;
                }
            }
            return true;
        }
    }
    // check if a number is odd or not
    bool isOdd(int n){
        if(n%2 == 0){
            return false;
        }
        return true;
    }
    // get summation of a series
    double sums(int start, int end, double (*fc)(double)){
        if(start > end){
            int temp = start;
            start = end;
            end = temp;
        }
        double sum = 0;
        for(int i = start; i <= end; i++){
            sum += fc(i);
        }
        return sum;
    }
    // get combination of nCr
    double combo(int n, int r){
        if(n>=0 && r>=0 && n>=r){
           return fact(n)/(fact(r)*fact(n-r));
        }else{
            return nan("");
        }
    }
    // get permutation of nPr
    double permt(int n, int r){
        if(n>=0 && r>=0 && n>=r){
           return fact(n)/fact(n-r);
        }else{
            return nan("");
        }
    }
    // get gcd of two numbers
    int gcd(int a, int b){
        if(a == 0){
            return b;
        }
        return gcd(b%a, a);
    }
    // get lcm of two numbers
    int lcm(int a, int b){
        return (a*b)/gcd(a, b);
    }
    // get all prime numbers between two numbers
    int* primes(int start, int end){
        if(start > end){
            int temp = start;
            start = end;
            end = temp;
        }
        static int result[100];
        int j = 0;
        for(int i = start; i <= end; i++){
            if(isPrime(i)){
                j++;
                result[j] = i;
            }
        }
        return result;
    }
}
#include <iostream>
#include "../index.cpp" // to get basic functions like fact, isPrime, isOdd, sums, combo, permt, gcd, lcm
#include "../measure.cpp"// to get measure functions like lineWidth, Perimeter, Area, Volume, SurfaceArea, tringleAngle
#include "../const.cpp" // to get constants
using namespace std;
int func(int x){
    return x*x;
}
int main(){
    int a[] = {1, 2, 3, 4, 5};
    cout << mlb::add(a, 5) << endl;
    cout << mlb::sub(a, 5) << endl;
    cout << mlb::mul(a, 5) << endl;
    cout << mlb::div(a, 5) << endl;
    cout << mlb::avg(a, 5) << endl;
    cout << mlb::logx(2, 8) << endl;
    cout << mlb::rootx(2, 8) << endl;
    cout << mlb::random(1, 10) << endl;
    cout << mlb::fact(5) << endl;
    cout << mlb::isPrime(5) << endl;
    cout << mlb::isOdd(5) << endl;
    cout << mlb::sums(2, 5, func) << endl;
    vector<int> g1 = mlb::primeFactors(210);
    cout << "Prime Factors of 30 are: ";
    for (auto i = g1.begin(); i != g1.end(); ++i)
        cout << *i << " ";
    return 0;
}

#include "../index.cpp"          // to get basic functions like fact, isPrime, isOdd, sums, combo, permt, gcd, lcm, primeFactors, etc.
#include "../scripts/tester.cpp" // to get the tester functions like describe, toEq, toClose, etc.
using namespace std;
int func(int x)
{
    return x * x;
}
int main()
{
    int a[] = {1, 2, 3, 4, 5};
    vector<int> g1 = mlb::primeFactors(210); // 2 3 5 7
    tester::describe("Prime Factors", [&g1, &a]()
                     {
    tester::toEq("Prime Factors", 2, g1[0]);
    tester::toEq("Prime Factors", 3, g1[1]);
    tester::toEq("Prime Factors", 5, g1[2]);
    tester::toEq("Prime Factors", 7, g1[3]);
    tester::toEq("GCD", 2, mlb::gcd(4, 6));
    tester::toEq("is odd", 1, mlb::isOdd(5));
    tester::toEq("is prime", 0, mlb::isPrime(6));
    tester::toEq("is prime", 0, mlb::isPrime(7));
    tester::toEq("factorial", 120, mlb::fact(5));
    tester::toLessOrEq("less than or equal",10, mlb::random(1, 10)); 
    tester::toEq("add", 15, mlb::add(a, 5));
    tester::toEq("sub", -15, mlb::sub(a, 5));
    tester::toEq("mul", 120, mlb::mul(a, 5));
    tester::toClose("div", 0.00833333, mlb::div(a, 5));
    tester::toEq("avg", 3, mlb::avg(a, 5));
    tester::toEq("logx", 3, mlb::logx(2, 8));
    tester::toClose("rootx", 2.82843, mlb::rootx(2, 8), 0.00001);
    tester::toEq("sums", 54, mlb::sums(2, 5, func)); });
    return 0;
}

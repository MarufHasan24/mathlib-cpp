#include <iostream>
#include "../binary_op.cpp"

using namespace std;
int main(){
    cout << mlb::decimalToBinary(5) << endl;
    cout << mlb::binaryToDecimal("101") << endl;
     cout << mlb::binaryAddition("101", "101") << endl;
    cout << mlb::binarySubtraction("101", "101") << endl;
    cout << mlb::binaryMultiplication("101", "101") << endl;
    cout << mlb::binaryDivision("101", "101") << endl;
    cout << mlb::binaryAddition(101, 101) << endl;
    cout << mlb::binarySubtraction(101, 101) << endl;
    cout << mlb::binaryMultiplication(101, 101) << endl;
    cout << mlb::binaryDivision(101, 101) << endl;
    return 0;
}
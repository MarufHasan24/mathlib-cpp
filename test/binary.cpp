#include <iostream>
#include "../binary.cpp"

using namespace std;
int main(){
    cout << mlb::decimalToBinary(5) << endl;
    cout << mlb::binaryToDecimal("101") << endl;
    cout << mlb::binaryAdd("101", "101") << endl;
    cout << mlb::binarySub("101", "101") << endl;
    cout << mlb::binaryMul("101", "101") << endl;
    cout << mlb::binaryDiv("101", "101") << endl;
    cout << mlb::binaryAdd(101, 101) << endl;
    cout << mlb::binarySub(101, 101) << endl;
    cout << mlb::binaryMul(101, 101) << endl;
    cout << mlb::binaryDiv(101, 101) << endl;
    return 0;
}
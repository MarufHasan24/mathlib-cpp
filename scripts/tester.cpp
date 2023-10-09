#include <iostream>
#include <functional>
#include <string>
#include <fstream>

using namespace std;

namespace tester
{
    int pass = 0, fail = 0, tests = 0;
    void describe(string &&name, function<void()> fn)
    {
        cout << "Test: " << name << endl;
        cout << "------------------------" << endl;
        fn();
        cout << "------------------------" << endl;
        cout << "Pass: " << pass << endl;
        cout << "Fail: " << fail << endl;
        cout << "------------------------" << endl;
        ofstream file("test.txt", ios::app);
        file << to_string(pass) + "," << to_string(fail);
        pass = 0;
        fail = 0;
        file.close();
    }
    void toEq(string &&message, auto expected, auto actual)
    {
        try
        {
            tests++;
            if (expected == actual)
            {
                cout << "Passed: " << message << endl;
                pass++;
            }
            else
            {
                cout << "Failed: " << message << endl;
                cout << "Got something else, which is not equal to " << expected << endl;
                cout << "Actual: " << actual << endl;
                fail++;
            }
        }
        catch (const exception &e)
        {
            cout << "Failed: " << message << endl;
            cout << "Error: " << e.what() << endl;
            cout << "Expected " << expected << endl;
            fail++;
        }
    }
    void toClose(string &&message, auto expected, auto actual, float tolerance = 0.001)
    {
        try
        {
            tests++;
            if (abs(expected - actual) <= tolerance)
            {
                cout << "Passed: " << message << endl;
                pass++;
            }
            else
            {
                cout << "Failed: " << message << endl;
                cout << "Got something else, which is not equal or close to " << expected << endl;
                cout << "Actual: " << actual << endl;
                fail++;
            }
        }
        catch (const exception &e)
        {
            cout << "Failed: " << message << endl;
            cout << "Error: " << e.what() << endl;
            cout << "Expected " << expected << endl;
            fail++;
        }
    }
    void toGreaterOrEq(string &&message, auto expected, auto actual)
    {
        try
        {
            tests++;
            if (expected <= actual)
            {
                cout << "Passed: " << message << endl;
                pass++;
            }
            else
            {
                cout << "Failed: " << message << endl;
                cout << "Got something else, which is not equal or greater than " << expected << endl;
                fail++;
            }
        }
        catch (const exception &e)
        {
            cout << "Failed: " << message << endl;
            cout << "Error: " << e.what() << endl;
            cout << "Expected " << expected << endl;
            fail++;
        }
    }
    void toLessOrEq(string &&message, auto expected, auto actual)
    {
        try
        {
            tests++;
            if (expected >= actual)
            {
                cout << "Passed: " << message << endl;
                pass++;
            }
            else
            {
                cout << "Failed: " << message << endl;
                cout << "Got something else, which is not equal to less than " << expected << endl;
                fail++;
            }
        }
        catch (const exception &e)
        {
            cout << "Failed: " << message << endl;
            cout << "Error: " << e.what() << endl;
            cout << "Expected " << expected << endl;
            fail++;
        }
    }
    void toEqWithPadding(string &&message, string &&expected, string &&actual, int paddinglen = 16)
    {
        try
        {
            tests++;
            expected = string(paddinglen - expected.length(), '0') + expected;
            if (expected == actual)
            {
                cout << "Passed: " << message << endl;
                pass++;
            }
            else
            {
                cout << "Failed: " << message << endl;
                cout << "Got something else, which is not equal with padding to " << expected << endl;
                cout << "Actual: " << actual << endl;
                fail++;
            }
        }
        catch (const exception &e)
        {
            cout << "Failed: " << message << endl;
            cout << "Error: " << e.what() << endl;
            cout << "Expected " << expected << endl;
            fail++;
        }
    }
}

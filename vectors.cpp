//Lawrence Chiappelli

// VECTOR DEMONSTRATION

​

#include <iostream>
#include <vector>
using namespace std;

bool testPIN(vector<int>, vector<int>, const int);

​

bool testPIN(vector<int>, vector<int>, const int)
{
    return false;
}

​

int main()
{
    const int NUM_DIGITS = 7; 
    vector<int> v_pin1{ 2, 4, 1, 8, 7, 9, 0 };
    vector<int> v_pin2{ 2, 4, 6, 8, 7, 9, 0 };
    vector<int> v_pin3{ 1, 2, 3, 4, 5, 6, 7 };

    if (testPIN(v_pin1, v_pin2, NUM_DIGITS))
        cout << "ERROR: pin1 and pin2 report to be the same.\n";
    else
        cout << "SUCCESS: pin1 and pin2 are different.\n";

    if (testPIN(v_pin1, v_pin3, NUM_DIGITS))
        cout << "ERROR: pin1 and pin3 report to be the same.\n";
    else
        cout << "SUCCESS: pin1 and pin3 are different.\n";

    if (testPIN(v_pin1, v_pin1, NUM_DIGITS))
        cout << "SUCCESS: pin1 and pin1 report to be the same.\n";
    else
        cout << "ERROR: pin1 and pin1 report to be different.\n";
    return 0;
}


bool testPIN(const int custPIN[], const int databasePIN[], int size)
{
    for (int index = 0; index < size; index++)
    {
        if (custPIN[index] != databasePIN[index])
            return false;
    }

    return true;
}

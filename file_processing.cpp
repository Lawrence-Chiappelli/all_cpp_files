//Lawrence Chiappelli

// FILE PROCESSING

​

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

​

int main()
{

    char proceed;
    const int NUMBER_OF_NUMBERS = 7;
    int v1 = 0, v2 = 0, v3 = 0, v4 = 0, v5 = 0, v6 = 0, v7 = 0, vsum, vavg;

    do
    {
        fstream numberFile;
        numberFile.open("C:\\Users\\AbyssalThunder\\Documents\\Actual Documents\\Code\\C++\\PearsonSourceCode\\Chapter 05\\ListOfNumbers.txt");

        numberFile >> v1;
        numberFile >> v2;
        numberFile >> v3;
        numberFile >> v4;
        numberFile >> v5;
        numberFile >> v6;
        numberFile >> v7;
        vsum = v1 + v2 + v3 + v4 + v5 + v6 + v7;
        vavg = vsum / NUMBER_OF_NUMBERS;

        cout << "Opening file...\n\nA) Numbers in the file:\n"
            << v1 << endl
            << v2 << endl
            << v3 << endl
            << v4 << endl
            << v5 << endl
            << v6 << endl
            << v7 << endl

            << "\nB) Sum of all numbers: \n"
            << vsum << endl

            << "\nC) Average of all numbers: \n"
            << vavg << endl

            << "Again? (y/n)\n"
            << endl;

        cin >> proceed;
    } while (proceed == 'y');

​

    return 0;
}

//Lawrence Chiappelli
// OUTPUT ALIGNMENT

​

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;



double year = 1, fee = 2500;
int increase = 4;

​

int main()
{
    cout << "Lawrence Chiappelli\n\n";
    cout << "Year\t";
    cout << "Increase" << setw(7);
    cout << "Fee" << "\n=========================" << endl;

​

    while (year < 7)
    {
        fee = (fee * 0.04) + fee;    

        cout << year  << "\t";
        cout << setw(2) << increase << "%\t";
        cout << setw(5) << "$" << fixed << setprecision(0) << fee << "\n";

        year++;
        increase += 4;
    }

​

    return 0;
}

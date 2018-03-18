//Lawrence Chiappelli
// RAINFALL STATISTICS

​

include <iostream>

using namespace std;

​

//Function Prototype
void dataDisplay(double, double, double, double); 

​

int main()
{
    const int MONTH_LOOP_ARRAY_COUNTER = 11;
    double months_array[MONTH_LOOP_ARRAY_COUNTER];

    double totalYear = 0;
    double averageMonthly = 0;
    double highestMonth = months_array[0];
    double lowestMonth = months_array[0];

​

    for (int loop_counter = 0; loop_counter <= MONTH_LOOP_ARRAY_COUNTER; loop_counter++)
    {
        cout << "Enter rainfall for month " << (loop_counter + 1) << ":\n";
        cin >> months_array[loop_counter];

​

        while (months_array[loop_counter] < 0)
        {
            cout << "Invalid. Enter a positive number. Month " << (loop_counter + 1) << ":\n";
            cin >> months_array[loop_counter];
        }

​

        totalYear += months_array[loop_counter];

        if (months_array[loop_counter] > highestMonth)
            highestMonth = months_array[loop_counter];

​

        if (loop_counter == 0)
            lowestMonth = months_array[loop_counter];
        else
        {
            if(months_array[loop_counter] < lowestMonth)
            {
                lowestMonth = months_array[loop_counter];
            }
        }

    }           

​

    averageMonthly = totalYear / 12;
    dataDisplay(totalYear, averageMonthly, highestMonth, lowestMonth);

​

    return 0;
}


void dataDisplay(double tY, double aM, double hM, double lM)
{

    cout<< "The total for the year is: " << tY
        << "\nThe monthly average is: " << aM
        << "\nThe highest month is: " << hM
        << "\nThe lowest month is: " << lM
        << endl;
}

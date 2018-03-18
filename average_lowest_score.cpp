//Lawrence Chiappelli
// AVERAGE + LOWEST SCORE

​

using namespace std;
#include <iostream>

​

///Function prototypes
void getScore(int array_pointer[], int ARRAY_COUNT);
void calcAverage(int array_pointer[]);
int findLowest(int array_pointer[]);

​

int main()
{
    const int ARRAY_COUNT = 4;
    int userInput_score_array[ARRAY_COUNT];
    int loop_totalTests = 0;

    cout << "Test average calculator for 4 test scores, dropping the lowest one from a total of 5\n\n";

    getScore(userInput_score_array, ARRAY_COUNT);
    calcAverage(userInput_score_array);

    return 0;
}


void getScore(int array_pointer[], int ARRAY_COUNT)
{


    for (int x = 0; x <= ARRAY_COUNT; x++)
    {
        cout << "Enter the score for test " << (x + 1) << ":\n";
        cin >> array_pointer[x];

        if (array_pointer[x] < 0 || array_pointer[x] > 100)
        {
            cout << "Invalid. Score must be above -1 and under 101. Test " << (x + 1) << ":\n";
            cin >> array_pointer[x];
        }
    }
    /*void getScore() should ask the user for a test score, store it in a reference parameter variable, and validate it. This function should be called by main once for each of the five scores to be entered. */
}


void calcAverage(int array_pointer[])    ///Passing the array once again.
{
    int scoreToDrop;
    int scoreAccumulator;
    
    scoreToDrop = findLowest(array_pointer);    ///Determining the lowest score to be dropped.
                                                    
    scoreAccumulator =
        array_pointer[0] +
        array_pointer[1] +
        array_pointer[2] +
        array_pointer[3] +
        array_pointer[4];                    ///Adding all array contents to determine the accumulator
                                                    
    scoreAccumulator = scoreAccumulator - scoreToDrop;            ///Dropping the lowest score, using scoreAccumulator as the variable

    cout << "\nThe average is:\n" << scoreAccumulator / 4 << "\n\n";        ///Divide by 4, instead of 5 due to 1 of the scores being dropped

    /*void calcAverage() should calculate and display the average of the four highest scores. This function should be called just once by main and should be passed the five scores. */

}


int findLowest(int array_pointer[])
{
    const int ARRAY_COUNTER_CONST = 4;
    int lowestScore = 0;

    for (int loop_counter = 0; loop_counter < ARRAY_COUNTER_CONST; loop_counter++)
    {
        if (loop_counter == 0)
        {
            lowestScore = array_pointer[loop_counter];
        }
        else
        {
            if (array_pointer[loop_counter] < lowestScore)
            {
                lowestScore = array_pointer[loop_counter];
            }
        }
    }

    cout << "\nThe lowest score being dropped is: \n" << lowestScore << endl;
    return lowestScore;

    /*int findLowest() should find and return the lowest of the five scores passed to it. It should be called by calcAverage, which uses the function to determine which of the five scores to drop.*/

}

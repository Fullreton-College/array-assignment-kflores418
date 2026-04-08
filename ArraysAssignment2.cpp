#include <iostream>
#include <string>

using namespace std;

// Function prototype
int countPerfect(const int scores[], int size);

int main() 
{
    int scores[20];
    int count = 0;
    int input;
    cout << "Enter up to 20 scores (0-100). Enter -1 to stop:\n";
    cin >> input;

    while(count < 20)
    {
        if (input <= 100 && input >= 0)
        {
        scores[count] = input;
        count++;
        //cout << "Next Score: ";
        //cin >> input;
        }
        else if (input == -1)
        {
            break;
        }
        else
        {
            cout << "Invalid Score";
            break;
        }
        cout << "Next Score: ";
        cin >> input;
    }
    
    // Report perfect scores using the helper function
    // COMPLETE THE FUNCTION BELOW
  int perfectOnes = countPerfect(scores, count);
    
    cout << "\nYou entered " << count << " scores." << endl;
    cout << "Perfect scores (100): " << perfectOnes << endl;

    return 0;
}

// Value-returning function to count scores of 100
int countPerfect(const int scores[], int size) {
    int totalPerfect = 0;
    
    for (int i = 0; i < size; i++)
    {
        if (scores[i] == 100)
        {
            totalPerfect++;
        }
    }
    return totalPerfect;
}

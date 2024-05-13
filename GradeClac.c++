#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int nsd;
    cout << "Enter the number of subjects: ";
    cin >> nsd;

    double grades[nsd];
    double sum = 0;

    for (int i = 0; i < nsd; i++) {
        cout << "Enter the grade for subject " << i + 1 << ": ";
        cin >> grades[i];
        sum += grades[i];
    }

    double average = sum / nsd;
//setting upto two decimal places
    cout << fixed << setprecision(2);
    cout << "The average grade for each subject is: " << average << endl;

    return 0;
}
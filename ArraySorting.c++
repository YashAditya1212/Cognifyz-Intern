#include <iostream>
#include <vector>

using namespace std;

void bubbleSort(vector<int>& arr, bool ascending = true) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (ascending ? arr[j] > arr[j + 1] : arr[j] < arr[j + 1]) {
                // Swap the elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    vector<int> numbers;
    int count, number;
    char sortOrder;

    cout << "Enter the number of elements in the array: ";
    cin >> count;

    cout << "Enter " << count << " integers:" << endl;
    for (int i = 0; i < count; i++) {
        cin >> number;
        numbers.push_back(number);
    }

    cout << "Choose sort order (A for ascending, D for descending): ";
    cin >> sortOrder;

    // Determine sort order
    bool ascending = (sortOrder == 'A' || sortOrder == 'a');

    // Sort the array
    bubbleSort(numbers, ascending);

    // Output the sorted array
    cout << "Sorted array: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

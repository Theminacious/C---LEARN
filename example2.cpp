#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> numbers(n);
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }

    // Sort numbers in descending order
    sort(numbers.rbegin(), numbers.rend());

    vector<int> selectedNumbers;
    int currentSum = 0;

    // Select elements from numbers array such that their sum is 5
    for (int i = 0; i < n; ++i) {
        if (currentSum + numbers[i] ==5) {
            currentSum += numbers[i];
            selectedNumbers.push_back(numbers[i]);
        }
    }

    // Sort the selectedNumbers array in ascending order
    sort(selectedNumbers.begin(), selectedNumbers.end());

    // Print the selectedNumbers array
    cout << "Selected Numbers: ";
    for (int i = 0; i < selectedNumbers.size(); ++i) {
        cout << selectedNumbers[i] << " ";
    }

    return 0;
}

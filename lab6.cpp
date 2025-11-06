#include <iostream>
using namespace std;

void findMinMax() {
    int n, arr[100];
    cout << "Enter number of elements: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    int min = arr[0], max = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] < min)
            min = arr[i];
        if (arr[i] > max)
            max = arr[i];
    }

    cout << "Minimum value = " << min << endl;
    cout << "Maximum value = " << max << endl;
}

int main6() {
    findMinMax();
    return 0;
}


#include <iostream>
using namespace std;

void findAverage() {
    int n, arr[100], sum = 0;
    cout << "Enter number of elements: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
        sum += arr[i];
    }

    float avg = (float)sum / n;
    cout << "Average value = " << avg << endl;
}

int main5() {
    findAverage();
    return 0;
}

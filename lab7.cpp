#include <iostream>
using namespace std;

void concatenateNames() {
    char first[50], last[50], full[100];
    int i = 0, j = 0;

    cout << "Enter First Name: ";
    cin >> first;
    cout << "Enter Last Name: ";
    cin >> last;

    while (first[i] != '\0') {
        full[i] = first[i];
        i++;
    }

    full[i] = ' ';
    i++;

    while (last[j] != '\0') {
        full[i] = last[j];
        i++;
        j++;
    }

    full[i] = '\0';

    cout << "Full Name: " << full << endl;
}

int main7() {
    concatenateNames();
    return 0;
}

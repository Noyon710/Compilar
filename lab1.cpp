#include <iostream>
using namespace std;

bool isNumeric(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] < '0' || str[i] > '9')
            return false;
    }
    return true;
}

int main1() {
    char input[100];
    cout << "Enter a string: ";
    cin >> input;

    if (isNumeric(input))
        cout << "The string is numeric." << endl;
    else
        cout << "The string is not numeric." << endl;

    return 0;
}

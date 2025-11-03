#include <iostream>
using namespace std;

int main() {
    char str[100];
    cout << "Enter input: ";
    cin >> str;

    bool isNum = true;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] < '0' || str[i] > '9') {
            isNum = false;
            break;
        }
    }

    if (isNum)
        cout << "Numeric Constant" << endl;
    else
        cout << "Not Numeric" << endl;

    return 0;
}

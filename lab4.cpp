#include <iostream>
using namespace std;

bool isIdentifier(char str[]) {
    if (!((str[0] >= 'A' && str[0] <= 'Z') ||
          (str[0] >= 'a' && str[0] <= 'z') ||
          str[0] == '_'))
        return false;

    for (int i = 1; str[i] != '\0'; i++) {
        if (!((str[i] >= 'A' && str[i] <= 'Z') ||
              (str[i] >= 'a' && str[i] <= 'z') ||
              (str[i] >= '0' && str[i] <= '9') ||
              str[i] == '_'))
            return false;
    }
    return true;
}

int main4() {
    char str[100];
    cout << "Enter a string: ";
    cin >> str;

    if (isIdentifier(str))
        cout << "It is a valid identifier." << endl;
    else
        cout << "It is NOT a valid identifier." << endl;

    return 0;
}

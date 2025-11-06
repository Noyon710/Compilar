#include <iostream>
using namespace std;

void checkComment(char str[]) {
    int len = 0;
    while (str[len] != '\0') len++;

    if (str[0] == '/' && str[1] == '/')
        cout << "It is a Single Line Comment." << endl;
    else if (str[0] == '/' && str[1] == '*' && str[len - 2] == '*' && str[len - 1] == '/')
        cout << "It is a Multi Line Comment." << endl;
    else
        cout << "It is NOT a Comment Line." << endl;
}

int main3() {
    char str[100];
    cout << "Enter a line: ";
    cin.getline(str, 100);

    checkComment(str);

    return 0;
}

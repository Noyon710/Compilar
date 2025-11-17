#include <iostream>
#include <fstream>
using namespace std;

bool isValidIdentifier(const string &c) {

    if (c.length() == 0)
        return false;

    // 1. First character must be letter or underscore
    if (!((c[0] >= 'A' && c[0] <= 'Z') ||
          (c[0] >= 'a' && c[0] <= 'z') ||
           c[0] == '_'))
        return false;

    // 2. Cannot be a reserved keyword
    if (c == "int" || c == "float" || c == "double" || c == "string" ||
        c == "bool" || c == "const" || c == "char" || c == "return" ||
        c == "void" || c == "main")
        return false;

    // 3. Check the rest characters
    for (int i = 1; i < c.length(); i++) {
        if (!((c[i] >= 'A' && c[i] <= 'Z') ||
              (c[i] >= 'a' && c[i] <= 'z') ||
              (c[i] >= '0' && c[i] <= '9') ||
               c[i] == '_'))
            return false;
    }

    return true;
}

void IdentifierCheck() {

    string c;
    int line = 1;

    cout << "Taking context from the txt file sample: " << endl << endl;

    ifstream MyReadFile("Sample.txt");

    if (!MyReadFile.is_open()) {
        cout << "Sample.txt not found!" << endl;
        return;
    }

    while (getline(MyReadFile, c)) {

        cout << c << endl;
        cout << "Checking if line " << line << " is a valid identifier..." << endl;

        if (isValidIdentifier(c))
            cout << "It IS a valid identifier." << endl << endl;
        else
            cout << "NOT a valid identifier." << endl << endl;

        line++;
    }
}

int main() {
    IdentifierCheck();
    return 0;
}

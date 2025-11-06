#include <iostream>
using namespace std;

void findOperators(char expression[]) {
    char ops[] = { '+', '-', '*', '/', '%', '=' };
    int count = 0;

    for (int i = 0; expression[i] != '\0'; i++) {
        for (int j = 0; j < 6; j++) {
            if (expression[i] == ops[j]) {
                count++;
                cout << "operator" << count << ": " << expression[i] << endl;
            }
        }
    }

    if (count == 0)
        cout << "No arithmetic operators found." << endl;
}

int main2() {
    char expression[100];
    cout << "Enter an expression: ";
    cin >> expression;

    findOperators(expression);

    return 0;
}


#include <iostream>
using namespace std;

bool isNumeric(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] < '0' || str[i] > '9')
            return false;
    }
    return true;
}

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
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];
    }
    cout << "Minimum value = " << min << endl;
    cout << "Maximum value = " << max << endl;
}

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

int main() {
    int choice;
    char input[100];
    while (true) {
        cout << "\n=========== LAB TASK MENU ===========" << endl;
        cout << "1. Check Numeric Constant" << endl;
        cout << "2. Find Operators" << endl;
        cout << "3. Check Comment Line" << endl;
        cout << "4. Check Identifier" << endl;
        cout << "5. Find Average (Array)" << endl;
        cout << "6. Find Min & Max (Array)" << endl;
        cout << "7. Concatenate Names" << endl;
        cout << "8. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();
        switch (choice) {
        case 1:
            cout << "Enter input: ";
            cin >> input;
            if (isNumeric(input))
                cout << "Numeric Constant" << endl;
            else
                cout << "Not Numeric" << endl;
            break;
        case 2:
            cout << "Enter expression: ";
            cin >> input;
            findOperators(input);
            break;
        case 3:
            cout << "Enter line: ";
            cin.getline(input, 100);
            checkComment(input);
            break;
        case 4:
            cout << "Enter identifier: ";
            cin >> input;
            if (isIdentifier(input))
                cout << "Valid Identifier" << endl;
            else
                cout << "Invalid Identifier" << endl;
            break;
        case 5:
            findAverage();
            break;
        case 6:
            findMinMax();
            break;
        case 7:
            concatenateNames();
            break;
        case 8:
            cout << "Exiting program..." << endl;
            return 0;
        default:
            cout << "Invalid choice. Try again." << endl;
        }
    }
}

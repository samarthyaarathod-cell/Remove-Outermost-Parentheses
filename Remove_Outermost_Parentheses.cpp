#include <iostream>
#include <string>
using namespace std;

string removeOuterParentheses(string s) {
    string result = "";
    int balance = 0;

    for (char c : s) {
        // If opening bracket
        if (c == '(') {
            if (balance > 0) {
                result += c;  // not outermost
            }
            balance++;
        }
        // If closing bracket
        else {
            balance--;
            if (balance > 0) {
                result += c;  // not outermost
            }
        }
    }

    return result;
}

int main() {
    string s;
    cout << "Enter parentheses string: ";
    cin >> s;

    cout << "Output: " << removeOuterParentheses(s) << endl;

    return 0;
}
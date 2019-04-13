#include <stack>
#include<iostream>
#include<string>

using namespace std;

int main() {
    int n;
    char c;

    cin >> n;
    cin.ignore();
    cin.ignore();

    while (n--) {
        stack<char> numbers;
        stack<char> operators;
        stack<char> result;

        while (cin >> c, c != '\n') {
            cout << "ai: " << c << endl;
            if (c == '+' || c == '-' || c == '/' || c == '*')
                operators.push(c);
            else if (c >= '0' && c <= '9')
                numbers.push(c);
        }
        while (!operators.empty()) {
            result.push(operators.top());
            operators.pop();
            result.push(numbers.top());
            numbers.pop();
        }
        while (!result.empty()) {
            cout << result.top();
            result.pop();
        }
        cout << endl;
    }


    return 0;
}
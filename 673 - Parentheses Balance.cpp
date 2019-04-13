#include <stack>
#include<iostream>
#include<string>

using namespace std;

int main() {
    int n;
    string s;
    int len;

    cin >> n;
    cin.ignore();
    while (n--) {
        stack<char> stack;
        getline(cin, s);
        len = s.size();

        if (len & 1) { //isOdd
            cout << "No" << endl;
            continue;
        }

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(' || s[i] == '[')
                stack.push(s[i]);
            else if (!stack.empty()) //because of stack.top()
                if ((s[i] == ')' && stack.top() == '(') || (s[i] == ']' && stack.top() == '['))
                    stack.pop();
        }

        if (stack.empty())
            cout << "Yes" << endl;
        else
            cout << "No" << endl;

    }
    return 0;
}
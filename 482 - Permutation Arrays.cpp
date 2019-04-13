#include <iostream>
#include <sstream>
#include <map>

using namespace std;

int main() {
    map<int, string> m;

    int n;
    cin >> n;
    cin.ignore();
    cin.ignore();

    while (n--) {
        string line;
        string line2;
        getline(cin, line);
        getline(cin, line2);
        cin.ignore();
        stringstream ss(line);
        stringstream ss2(line2);

        int key;
        string value;
        while (ss >> key && ss2 >> value)
            m[key] = value;

        for (int i = 1; i <= m.size(); i++)
            cout << m[i] << endl;

        if (n)
            cout << endl;
        m.clear();
    }
    return 0;
}

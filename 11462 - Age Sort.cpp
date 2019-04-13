#include <map>
#include <iostream>

using namespace std;

int main() {
    map<short int, int> m;
    int n;
    short int aux;

    while (cin >> n, n) {
        while (n--) {
            cin >> aux;
            m[aux]++;
        }
        bool begin = true;
        for (map<short int, int>::iterator it = m.begin(); it != m.end(); it++) {
            int t = it->second;
            while (t--) {
                if (begin)
                    cout << it->first;
                else
                    cout << " " << it->first;
                begin = false;
            }
        }
        cout << endl;
        m.clear();
    }
    return 0;
}

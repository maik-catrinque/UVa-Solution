#include <set>
#include <iostream>
#include <iterator>

using namespace std;

int main() {
    multiset<int> s;
    multiset<int>::iterator b, e;
    int n, aux, k;

    while (cin >> n, n) {
        long sum = 0;
        s.clear();
        while (n--) {
            cin >> k;
            while (k--) {
                cin >> aux;
                s.insert(aux);
            }
            b = s.begin();
            e = s.end();
            e--;
            sum += *e - *b;
            s.erase(b);
            s.erase(e);
        }
        cout << sum << endl;
    }
    return 0;
}
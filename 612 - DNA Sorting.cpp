#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class DNA {
public:
    int fit;
    string s;

    DNA(int fit = 0, string s = "") {
        this->fit = fit;
        this->s = s;
    }

    bool operator<(const DNA &d) const {
        return fit < d.fit;
    }
};


int main() {
    vector <DNA> v;
    int n, len, m, fit;
    string s;

    cin >> n;

    while (n--) {
        cin >> len >> m;
        while (m--) {
            cin >> s;
            DNA d(0, s);
            for (int i = 0; i < len; i++) {
                for (int j = i + 1; j < len; j++) {
                    if (s[i] > s[j])
                        d.fit++;
                }
            }
            v.push_back(d);
        }
        stable_sort(v.begin(), v.end());
        for (int i = 0; i < v.size(); i++) {
            cout << v[i].s << endl;
        }
        if (n)
            cout << endl;
        v.clear();
    }
}

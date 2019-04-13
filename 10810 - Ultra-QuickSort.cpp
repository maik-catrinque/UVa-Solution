#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, aux;
    std::vector<int> v;
    while (cin >> n, n) {
        int swaps = 0;
        while (n--) {
            cin >> aux;
            v.push_back(aux);
        }
        int len = v.size();
        for (int i = 0; i < len; i++) {
            for (int j = i + 1; j < len; j++) {
                if (v[i] > v[j])
                    swaps++;
            }
        }

        cout << swaps << endl;
    }
    return 0;
}

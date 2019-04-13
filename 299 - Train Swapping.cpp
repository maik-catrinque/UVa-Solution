#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

int insertion_sort(vector<int> &v) {  //4 3 2 1 -> 3 4 2 1 - > 2 3 4 1 -> 1 2 3 4
    int key;
    int i;
    int swaps = 0;
    for (int j = 1; j < v.size(); j++) {
        key = v[j];
        i = j - 1;
        while (i >= 0 && v[i] > key) {
            v[i + 1] = v[i];
            i--;
            swaps++;
        }
        v[i + 1] = key;
    }
    return swaps;
}


int main() {
    int n, l, swaps, aux;
    vector<int> v;

    scanf("%d\n", &n);
    while (n--) {
        scanf("%d\n", &l);
        while (l--) {
            scanf("%d\n", &aux);
            v.push_back(aux);
        }
        swaps = insertion_sort(v);
        cout << "Optimal train swapping takes " << swaps << " swaps." << endl;
        v.clear();
    }
}

#include <iostream>
#include <sstream>
#include <map>
#include <bitset>
#include <algorithm>
#include <iterator>

using namespace std;

int main() {
    string line;

    do {
        getline(cin, line);
        if (line == "#")
            break;
        bool r = next_permutation(line.begin(), line.end());
        if (r)
            cout << line << endl;
        else
            cout << "No Successor" << endl;
    } while (line != "#");

    return 0;
}

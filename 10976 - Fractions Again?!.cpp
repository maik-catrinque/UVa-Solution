#include <iostream>
#include <vector>
using namespace std;

/* 1/k = 1/x + 1/y
 * y(x) = kx/(x-k)
 * (x-k) implies that x > k
 *
 * for y = x we have: x = 2k.
 * We can fix this as the highest value for x,
 * so y is free to be any value.
 *
 * the interval is xE[k+1,2k]
 */

int main()
{
    int k;
    while (cin >> k)
    {
        vector<pair<int, int> > fractions;
        for (int x = k + 1; x <= 2 * k; x++)
        {
            if ((k * x) % (x - k) == 0) // if y is an integer
                fractions.push_back(make_pair((k * x) / (x - k), x));
        }
        cout << fractions.size() << endl;
        for (size_t i = 0; i < fractions.size(); i++)
            cout << "1/" << k << " = 1/" << fractions[i].first << " + 1/" << fractions[i].second << endl;
    }
    return 0;
}


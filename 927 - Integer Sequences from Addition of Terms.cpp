#include <stack>
#include<iostream>
#include<string>
#include <cmath>

using namespace std;

int c[30];
int i;

long long an(int n){
    long long sum = 0;
    for(short int j = 0; j <= i; j++){
        sum += c[j] * pow(n, j);
    }
    return sum;
}

int main() {
    short int n;
    int d,k;

    cin >> n;
    while(n--){
        cin >> i;

        for(short int j = 0; j <= i; j++){
            cin >> c[j];
        }

        cin >> d >> k;

        int kn = 0;
        for(short int j = 0; j <= 30; j++){
            kn += j*d;

            if(kn >= k){
                cout << an(j) << endl;
                break;
            }
        }
    }
    return 0;
}

#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
    	int n;
    	cin >> n;
    	vector<int> a;
    	while(n--){
    		int aux;
    		cin >> aux;
    		a.push_back(aux);
    	}

    	int sum = 0;
		for(size_t i = 0; i < a.size(); i++){
			for(size_t j = 0; j < i; j++){
				if(a[j] <= a[i])
					sum++;
			}
		}
		cout << sum <<endl;

    }

    return 0;
}


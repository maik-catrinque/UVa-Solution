#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>    // std::sort
#include <climits>

using namespace std;

int main(){
    int n,m,aux;
    int count = 1;
    while (cin >> n, n){
    	cout << "Case "<< count << ":" << endl;
    	vector<int> set,queries;
    	while(n--){
    		cin >> aux;
    		set.push_back(aux);
    	}
    	cin >> m;
    	while(m--){
    		int diff = INT_MAX;
    		int sum = 0;

    		cin >> aux;
    		for (size_t i = 0; i < set.size(); i++){
    			for (size_t j = 0; j < i; j++){
    				if (abs(set[i] + set[j] - aux) < diff){
    					diff = abs(set[i] + set[j] - aux);
    					sum = set[i] + set[j];
    				}
    			}
    		}
    		cout <<"Closest sum to "<< aux <<" is "<< sum <<"." <<endl;
    	}
    	count++;
    }

    return 0;
}


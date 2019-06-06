#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>    // std::sort
#include <climits>
#include <stack>

using namespace std;

double aux;
int n;
int counter;


void insertOnPegs(vector<stack<int> >& pegs, int v, int p){
	if(p == n)
		return;
	if(pegs[p].empty()){
		pegs[p].push(v);
		counter++;
		return insertOnPegs(pegs, v + 1, p);
	}

	for(int i = 0; i <= p; i ++){
		aux = sqrt(pegs[i].top() + v);

		if(aux - (int) aux == 0){ //if square number
			pegs[i].push(v);
			counter++;
			return insertOnPegs(pegs, v + 1, p);

		}
	}
	insertOnPegs(pegs, v, p + 1);
}

int main(){
    int t;

    cin >> t;
    while (t--){
    	cin >> n;
    	counter = 0;
    	vector<stack<int> > pegs;
    	for(int i = 0; i < n; i ++){
    		stack<int> aux;
    		pegs.push_back(aux);
    	}
    	insertOnPegs(pegs, 1, 0);
    	cout << counter << endl;
    }

    return 0;
}


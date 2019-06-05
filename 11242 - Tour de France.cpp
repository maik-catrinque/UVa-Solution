#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>    // std::sort

using namespace std;

int main(){
    int f,r;
    int aux;

    while (cin >> f, f){
        vector<int> vecF, vecR;
    	cin >> r;
    	while(f--){
    		cin >> aux;
    		vecF.push_back(aux);
    	}
    	while(r--){
    	    cin >> aux;
    	    vecR.push_back(aux);
    	}
    	vector<double> driveRatio;
    	for(size_t i = 0; i < vecF.size(); i++)
    		for(size_t j = 0; j < vecR.size(); j++)
    			driveRatio.push_back((double) vecR[j]/vecF[i]);

        sort(driveRatio.begin(), driveRatio.end());

        double max = 0;

        for(size_t i = 0; i < driveRatio.size() - 1; i++){
        	double aux = driveRatio[i+1]/driveRatio[i];
        	if(aux > max)
        		max = aux;
        }
        printf("%0.2f\n",max);

    }

    return 0;
}


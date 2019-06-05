#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

int main(){
    int n;
    int highest = 99999999;
    while (cin >> n){
    	char printAux[] = "%0xd\n";
    	printAux[2] = n + '0';

    	int auxFor = highest % (int)pow(10, n);
    	int auxPow = pow(10, n/2);
    	for(int abbcdefg = 0; abbcdefg < auxFor; abbcdefg++){
    		int abcd,efgh;

    		abcd = abbcdefg / auxPow;
    		efgh = abbcdefg % auxPow;

    		if ((abcd + efgh)*(abcd + efgh) == abbcdefg)
    			printf(printAux, abbcdefg);
    	}

    }

    return 0;
}


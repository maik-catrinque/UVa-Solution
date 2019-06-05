#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    int t;
    cin >> t;

    while (t--){
        int d;
        cin >> d;
        vector<pair<string, pair<int, int> > > database;

        while(d--){

            string name;
            cin >> name;
            int l, h;
            cin >> l >> h;
            database.push_back(make_pair(name, make_pair(l,h)));
        }
        int q;
        cin >> q;
        int p;
        while(q--){
            string name;
            int count = 0;
            cin >> p;
            for (size_t i = 0; i < database.size(); i++){
                if(p >= database[i].second.first && p <= database[i].second.second){
                    name = database[i].first;
                    count++;
                }
            }
            if(count == 1)
                cout << name << endl;
            else
                cout << "UNDETERMINED" << endl;
        }
        if(t)
        	cout << endl;
    }
    return 0;
}


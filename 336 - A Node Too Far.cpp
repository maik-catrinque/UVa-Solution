#include <iostream>
#include <iterator>
#include <vector>
#include <queue>
#include <map>

using namespace std;
map <int,int> visited;

void bfs(int start, map <int,vector<int> > graph) {
    queue<int> s;
    s.push(start);
    visited[start]=0;
    while (s.empty() == false) {
        int top = s.front();
        s.pop();
        int size = graph[top].size();
        for(int i=0;i<size;i++){
            int n =graph[top][i];
            if(!visited.count(n)){
                visited[n]=visited[top]+1; //Number of moves until here + 1
                s.push(n);
            }
        }
     }
}

int main(){
    int weight = 1;
    int nodes,a,b,cases=1;

    while(cin>>nodes,nodes){
             map <int,vector<int> > graph;
             for(int i=0;i<nodes;i++){
                     cin>>a>>b;
                     graph[a].push_back(b);
                     graph[b].push_back(a);
             }
             int ttl,start;
             while(cin>>start>>ttl,(start!=0 || ttl!=0)){
                map <int,int>::iterator it;
                visited.clear();
                bfs(start,graph);
                int result = 0;
                 for(it = visited.begin(); it != visited.end(); it++){
                    if(it->second>ttl)
						result++;
                 }
				result += graph.size()-visited.size();
				cout<<"Case "<<cases<<": "<<result<<" nodes not reachable from node "<<start<<" with TTL = "<<ttl<<"."<<endl;
                cases++;
             }

    }
 return 0;

}

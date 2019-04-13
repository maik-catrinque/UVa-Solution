#include <iostream>
#include <map>
#include <vector>
#include <iterator>

using namespace std;


int time;
map<int, int> visited;
map<int, vector<int> > graph;

void dfs_visit(int node) {
    time++;
    visited[node] = time;
    for (int i = 0; i < graph[node].size(); i++) {
        if (!visited.count(graph[node][i])
            dfs_visit(graph[node][i]);
    }
    time++;

}


void dfs() {
    int time = 0;
    map<int, int>::iterator it;
    for (it = graph.begin(); it != graph.end(); it++) {
        if (!visited.count(it->first))
            dfs_visit(it->first);
    }
}


createGraph() {
    vector<int> v1, v2, v3, v4, v5;
    v1.insert(v1.begin(), {2, 3, 5});
    v2.insert(v2.begin(), {1, 3, 5});
    v3.insert(v3.begin(), {1, 2, 4, 5});
    v4.insert(v4.begin(), {3, 5});
    v5.insert(v5.begin(), {1, 2, 3, 4});
    graph[1] = v1;
    graph[2] = v2;
    graph[3] = v3;
    graph[4] = v4;
    graph[5] = v5;
}


int main() {
    createGraph();
    dfs();
    return 0;

}
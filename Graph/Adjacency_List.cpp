/*
input:
5 4
0 1
1 2
1 3
3 4
output:
The graph is:
0 -> 1
1 -> 0 2 3
2 -> 1
3 -> 1 4
4 -> 3

*/

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef long long unsigned int ull;
typedef long double ld;
typedef vector<int> vr;
typedef pair<int, int> pr;
#define pb push_back
#define ff first
#define ss second
#define INF 1999999999
#define MODA 1000000007
#define PI 3.1415926535897932384626433
#define endl "\n"
//cout << fixed << setprecision(2);


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int nodes, edges;
    cin >> nodes >> edges;
    vector<int> graph[nodes];
    for(int i = 0; i < edges; i++) {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    cout << "The graph is: " << endl;
    for(int i = 0; i < nodes; i++) {
        cout << i << " -> ";
        for(int j = 0; j < graph[i].size(); j++) {
            cout << graph[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}


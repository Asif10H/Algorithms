/*
input:
5 4
0 1
1 2
1 3
3 4
output:
The graph is:
0 1 0 0 0
1 0 1 1 0
0 1 0 0 0
0 1 0 0 1
0 0 0 1 0
input:
5 6
0 1
0 2
0 3
1 4
2 3
3 4
output:
The graph is:
0 1 1 1 0
1 0 0 0 1
1 0 0 1 0
1 0 1 0 1
0 1 0 1 0
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

#define MAX 100
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int nodes, edges;
    cin >> nodes >> edges;
    int graph[MAX][MAX];
    for(int i = 0; i < edges; i++) {
        int u,  v;
        cin >> u >> v;
        graph[u][v] = graph[v][u] = 1;

    }
    cout << "The graph is: " << endl;
    for(int i = 0; i < nodes; i++) {
        for(int j = 0; j < nodes; j++) {
            cout << graph[i][j] << " ";
            /*if(graph[i][j] == 1) {
                cout << graph[i][j] << " ";
            }*/
        }
        cout << endl;
    }

    return 0;
}

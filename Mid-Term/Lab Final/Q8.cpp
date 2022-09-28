#include <bits/stdc++.h>
using namespace std;

int c = 0;
class Graph {
public:
    map<int, bool> visited;
    map<int, list<int> > adj;

    void addEdge(int v, int w);

    void DFS(int v);
};



void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w);
}
 
void Graph::DFS(int v)
{
    visited[v] = true;
    c++;
 
    list<int>::iterator i;
    for (i = adj[v].begin(); i != adj[v].end(); ++i)
        if (!visited[*i])
            DFS(*i);
}
 
int main()
{
    Graph g;
    int N, E;
    int a, b;
    cin>>N>>E;
    for(int m=0; m<E; m++)
    {
        cin>>a>>b;
        g.addEdge(a, b);
    }

    int k;
    cin>>k;
  
    g.DFS(k);
    cout<<c-1;
 
    return 0;
}
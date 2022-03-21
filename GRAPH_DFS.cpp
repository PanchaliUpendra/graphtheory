/* Depth first search*/
/*
#include<bits/stdc++.h>
using namespace std;
class ubbu
{
    public:
    void addEdge(unordered_map<int,list<int>> &m,int u,int v)
    {
        m[u].push_back(v);
    }
    void printdfs(unordered_map<int,list<int>> &m,unordered_map<int,bool> & visited,int v)
    {
        visited[v]=true;
        cout<<v<<" ";
        for(auto &x:m[v])
        {
            if(!visited[x])
            {
                printdfs(m,visited,x);
            }
        }

    }


};
int main()
{
    ubbu u;

    unordered_map<int,list<int>> m;
    unordered_map<int,bool> visited;

    u.addEdge(m,0,1);
    u.addEdge(m,0,2);
    u.addEdge(m,2,0);
    u.addEdge(m,3,3);
    u.addEdge(m,1,2);
    u.addEdge(m,2,3);

    u.printdfs(m,visited,0);
    return 0;
}*/
#include<bits/stdc++.h>
using namespace std;


void addEdge(unordered_map<int,list<int>> &mp,int u,int v)
{
    mp[u].push_back(v);
}

void DFS(int v,unordered_map<int,bool> & visited,unordered_map<int,list<int>> &mp)
{
    visited[v]=true;
    cout<<v<<" ";
    for(auto &x:mp[v])
    {
        if(!visited[x])
        {
            DFS(x,visited,mp);
        }
    }

}



int main()
{
    unordered_map<int,list<int>> m;
    addEdge(m,0, 1);
    addEdge(m,0, 9);
    addEdge(m,1, 2);
    addEdge(m,2, 0);
    addEdge(m,2, 3);
    addEdge(m,9, 3);
 
    unordered_map<int,bool> visited;

    DFS(0,visited,m);


    return 0;
}
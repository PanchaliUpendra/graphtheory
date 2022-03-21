// Conneted omponents
/*
sometimes a graph is split into multiple components ,its useful to be
able to identify and count these components
*/

#include<bits/stdc++.h>
using namespace std;
class ubbu{
    public:

    int n=11;
    int count=0;
    unordered_map<int,list<int>> m;
    unordered_map<int ,bool> visited;
    int arr[11]={0};

    void addEdge(int u,int v)
    {
        m[u].push_back(v);
        m[v].push_back(u);
    }
    int findcomponents()
    {
        for(int i=0;i<n;i++)
        if(!visited[i])
        {
            count++;
            dfs(i);
        }
        return  count;
    }

    void dfs(int i)
    {
        visited[i]=true;
        arr[i]=count;
        for(auto next:m[i])
        {
            if(!visited[next])
            {
                dfs(next);
            }
        }
    }
};

int main()
{
    class ubbu u;
   
    u.addEdge(1,4);
    u.addEdge(0,3);
    u.addEdge(1,3);
    u.addEdge(3,7);
    u.addEdge(2,7);
    u.addEdge(0,1);
    u.addEdge(2,4);
    u.addEdge(3,6);
    u.addEdge(5,6);
    u.addEdge(6,7);
    u.addEdge(4,7);
    u.addEdge(0,7);
    u.addEdge(5,7);
   



    cout<<"the no.of connects:"<<u.findcomponents()<<endl;

    return 0;
}
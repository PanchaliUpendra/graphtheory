//Breadth first searcch algorithm
#include<bits/stdc++.h>
using namespace std;


class graph{

public:
    int n=5;
    unordered_map<int,bool> visited;
    unordered_map<int,list<int>> m;
    void addEdge(int u,int v)
    {
        m[u].push_back(v);
    }
    vector<int> bfs(int s){
        vector<int> prev;
        prev=solve(s);
        return reconstructedpath(s,prev);
    }
    vector<int> solve(int s)
    {
        queue<int> q;
        q.push(s);
        visited[s]=true;
        vector<int> temp(n,0);
        while(!q.empty())
        {
            int node=q.front();
            q.pop();
            for(auto x:m[s])
            {
                if(!visited[x])
                {
                    q.push(x);
                    visited[x]=true;
                    temp[x]=node;
                }

            }
        }
        return temp;
    }
    vector<int> reconstructedpath(int s,vector<int> &prev)
    {
        vector<int> path;
        for(int i=prev.size()-1;i!=0;i=prev[i])
        {
            path.push_back(i);
        }
        reverse(path.begin(),path.end());
        if(path[0]==s)
        {
            return path;
        }
        vector<int> dummy;
        return  dummy;
    }
};
int main()
{
    class graph g;
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);
    vector<int> ans=g.bfs(2);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

class graph{
	public:
		unordered_map<int,list<int>> m;
		unordered_map<int,bool> visited;
		
		void addEdge(int u,int v)
		{
			m[u].push_back(v);
			m[v].push_back(u);
			
		}
		
		void bfs(int s)
		{
			queue<int> q;
			q.push(s);
			visited[s]=true;
			while(!q.empty())
			{
				int node=q.front();
				cout<<node<<" ";
				q.pop();
				for(auto x:m[s])
				{
					if(!visited[x])
					{
						visited[x]=true;
						q.push(x);
					}
				}
			}
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
    
    g.bfs(2);
	
	return 0;
}

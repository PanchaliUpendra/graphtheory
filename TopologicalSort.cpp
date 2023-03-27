//topological sort in graphs

#include<bits/stdc++.h>
using namespace std;
unordered_map<int,vector<int>>mp;
unordered_map<int,bool>visit;
void add_edge(int u,int v)
{
	mp[u].push_back(v);// direct graph
}
void dfs(int x,vector<int>&vn)
{
	visit[x]=true;
	for(auto z:mp[x])
	{
		if(visit[z]!=true)
		{
			
			dfs(z,vn);
		}
	}
	vn.push_back(x);
	
}
int main()
{
	//Lets the build the graph
	add_edge(1,2);
	add_edge(1,3);
	add_edge(2,4);
	add_edge(3,4);
	add_edge(4,6);
	add_edge(4,5);
	add_edge(6,7);
	add_edge(5,7);
	add_edge(6,9);
	add_edge(10,8);
	add_edge(3,8);
	add_edge(8,9);
	add_edge(8,6);
	
	int n=10; //no.of nodes
	vector<int> order(n,0);
	int i=n-1;
	for(int j=1;j<=n;j++)
	{
		if(visit[j]!=true)
		{
			
			vector<int>vn;//visited_nodes
			dfs(j,vn);
			for(auto x:vn)
			{
				order[i]=x;
				i=i-1;
			}
		}
	}
	for(auto x:order)
	{
		cout<<x<<" ";
	}
	return 0;
}

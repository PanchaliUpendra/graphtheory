/*
Adjacency List: 

An array of lists is used. The size of the array is equal to the number of vertices.
Let the array be an array[]. An entry array[i] represents the list of vertices adjacent 
to the ith vertex. This representation can also be used to represent a weighted graph. 
The weights of edges can be represented as lists of pairs. Following is the adjacency list
representation of the above graph. 
*/
/*
Note that in the below implementation, we use dynamic arrays (vector in C++/ArrayList in Java)
 to represent adjacency lists instead of the linked list. The vector implementation has advantages 
 of cache friendliness. 
*/
#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int>adj[],int u,int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void printgraph(vector<int>adj[],int V)
{
    for(int v=0;v<V;++v){
        cout<<"\n Adjacency list of vertex "<<v<<"\n head";
        for(auto x : adj[v])
        {
            cout<<"->"<<x;
        }
        cout<<"\n";
    }
}

int main()
{
    int V=5;
    vector<int>adj[V];
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 4);
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 1, 4);
    addEdge(adj, 2, 3);
    addEdge(adj, 3, 4);

    printgraph(adj,V);
    return 0;
}



 
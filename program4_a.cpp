#include <iostream>

using namespace std;

int adjacent[10][10],M,visited[10];
void DFS(int v)
{
	int i;
	cout<<v<<"\t";
	visited[v]=1;
	for(i=0;i<M;i++)
	{
		if(adjacent[v][i]==1&&visited[i]==0)
			DFS(i);
	}
}
int main()
{
	int j,i;
	cout<<"enter the number of nodes\n";
	cin>>M;
	cout<<"enter  the adjacency matrix\n";
	for(i=0;i<M;i++)
		for(j=0;j<M;j++)
			cin>>adjacent[i][j];
	for(i=0;i<M;i++)
		visited[i]=0;
	for(j=0;j<M;j++)
		if(visited[j]==0)
		{
			DFS(j);
			cout<<"\n";
		}
	return 0;
}

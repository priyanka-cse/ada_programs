#include <iostream>

using namespace std;
int matrix[10][10],visited[10][10],M,N;
void DFS(int row,int col)
{
	int rownum[]={-1,-1,-1,0,0,1,1,1};
	int colnum[]={-1,0,1,-1,1,-1,0,1};
	visited[row][col]=1;
	for (int k=0;k<8;++k) 
		if((row+rownum[k])>=0 && (row+rownum[k])<M && (col+colnum[k])>=0 && (col+colnum[k])<N && matrix[row+rownum[k]][col+colnum[k]]==1 && visited[row+rownum[k]][col+colnum[k]]==0)
			DFS(row+rownum[k],col+colnum[k]);
}
int main()
{
	int i,j;
	cout<<"enter the number of rows and cols\n";
	cin>>M;
	cin>>N;
	cout<<"enter  the adjacency matrix\n";
	for(i=0;i<M;i++)
		for(j=0;j<N;j++)
			cin>>matrix[i][j];
	for(i=0;i<M;i++)
		for(j=0;j<N;j++)
			visited[i][j]=0;
	int count=0;
	for(i=0; i<M;++i)
		for(j=0;j<N;++j) 
			if(matrix[i][j]==1&&visited[i][j]==0)
			{
				DFS(i,j);
				++count;
			}
	cout<<count;
	return 0;
}

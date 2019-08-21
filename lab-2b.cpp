#include <iostream>

using namespace std;
int main()
{
	int a[100],n,i,j,k,temp;
	cin>>n;
	for(i=0;i<n;i++)
		cin>>a[i];
	cout<<"enter key";
	cin>>k;
	for(i=0;i<k-1;i++)
	{
		for(j=0;j<n-2-i;j++)
		{
			if(a[j+1]<a[j])
			{
				temp=a[j+1];
				a[j+1]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=n-1;i>k;i--)
		cout<<a[i]<<"\n";
	return 0;
}

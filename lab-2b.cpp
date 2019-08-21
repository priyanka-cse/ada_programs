#include <iostream>

using namespace std;
int main()
{
	int a[100],n,i,j,k,temp;
	cout<<"enter size\n";
	cin>>n;
	cout<<"enter elements\n";
	for(i=0;i<n;i++)
		cin>>a[i];
	cout<<" how many elements??";
	cin>>k;
	for(i=0;i<k;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(a[j+1]<a[j])
			{
				temp=a[j+1];
				a[j+1]=a[j];
				a[j]=temp;
			}
		}
	}
	while(k!=0)
	{
		cout<<a[--n]<<"\n";
		k--;
	}
	
	return 0;
}

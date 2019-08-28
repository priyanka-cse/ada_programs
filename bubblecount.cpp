#include <iostream>

using namespace std;
int main()
{
	int a[100],n,i,j,temp,count;
	count=0;
	cout<<"enter size\n";
	cin>>n;
	cout<<"enter elements\n";
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			count++;
			if(a[j+1]<a[j])
			{
				temp=a[j+1];
				a[j+1]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
		cout<<a[i]<<"\n";
	cout<<"number of comarisions is:"<<count;
	return 0;
}


#include <iostream>

using namespace std;
int main()
{
	int a[100],n,i,j,temp,max,count;
	count=0;
	cout<<"enter the size\n";
	cin>>n;
	cout<<"enter the elements";
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<n;i++)
	{
		max=i;
		for(j=i+1;j<n;j++)
		{
			count++;
			if(a[j]<a[max])
				max=j;
		}
		temp=a[i];
		a[i]=a[max];
		a[max]=temp;
	}
	for(i=0;i<n;i++)
		cout<<a[i]<<"\n";
	cout<<"number of comarisions is:"<<count;
	return 0;
}

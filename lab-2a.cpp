#include <iostream>

#include <iostream>

using namespace std;
int main()
{
	int a[100],n,i,j,k,temp,max;
	cout<<"enter the size\n";
	cin>>n;
	cout<<"enter the elements";
	for(i=0;i<n;i++)
		cin>>a[i];
	cout<<"enter the k";
	cin>>k;
	for(i=0;i<k;i++)
	{
		max=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[max])
				max=j;
		}
		temp=a[i];
		a[i]=a[max];
		a[max]=temp;
	}
	cout<<"the kth smallest number is:"<<a[k-1];
	return 0;
}

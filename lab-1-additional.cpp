#include <iostream>

using namespace std;
int main()
{
	int n,a[100],low=0,mid,high,key,count=0,i,sec;
	cout<<"enter size\n";
	cin>>n;
	high=n;
	for(int i=0;i<n;i++)
		cin>>a[i];
	cout<<"enter the key";
	cin>>key;
	for(i=0;i<n;i++)
	{
		if(low<high)
		{
			mid=(low+high)/2;
			if(a[i]==key)
			{
				if(count==0)
					cout<<i;
				count++;
				sec=i;
			}
			else if(a[i]<key)
			{
				high=mid-1;
			}
			else
			{
				low=mid+1;
			}
		
		}
	}
	if(count==0)
	{
		cout<<"0 0 -1";
	}
	else
		cout<<" "<<sec<<" "<<count;
	return 0;
}

#include <iostream>

using namespace std;
int main()
{
	
	int i,j,a[30],n,amount,temp,c[30];
	cout<<"enter the number of denominations";
	cin>>n;
	cout<<"Enter available denominations";
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(a[j+1]>a[j])
			{
				temp=a[j+1];
				a[j+1]=a[j];
				a[j]=temp;
			}
		}
	}
	cout<<"enter the amount\n";
	cin>>amount;
	i=0;
	while(amount>0)
	{
		c[i]=amount/a[i];
		amount=amount%a[i];
		i++;
	}
	int sum=0;
	for(i=0;i<n;i++)
	{
		sum+=c[i];
		cout<<a[i]<<"*"<<c[i]<<endl;
	}
	cout<<"total coins="<<sum<<endl;
	return 0;
}
	

#include <iostream>

using namespace std;
int main()
{
	int n,beg=0,end,mid,sqrt;
	cout<<"enter the number to find square root of a number";
	cin>>n;
	end=n;
	while(beg<=end)
	{	
		mid=(beg+end)/2;
		if(mid*mid==n)
		{
			sqrt=mid;
			break;
		}
		else if(mid*mid<n)
		{
			beg=mid+1;
			sqrt=mid;
		}
		else
		{
			end=mid-1;
		}
	}
	cout<<sqrt<<"\n";
	return 0;
}

#include <iostream>

using namespace std;
int partition(int a[],int low,int high)
{
	int i,j,pivot;
	i=low+1;
	j=high;
	pivot=a[low];
	while(1)
	{
		while(a[i]<=pivot && i<=high)
			i++;
		while(a[j]>pivot && j>=low)
			j--;
		if(i<j)
		{
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
		}
		else
		{
			a[low]=a[j];
			a[j]=pivot;
			return j;
		}
	}
}
void quickSort(int a[],int low,int high)
{
	int pivot;
	if(low<high)
	{
		pivot=partition(a,low,high);
		quickSort(a,low,pivot-1);
		quickSort(a,pivot+1,high);
	}
}
int main()
{
	int a[100],n,i;
	cout<<"enter size\n";
	cin>>n;
	cout<<"enter elements\n";
	for(i=0;i<n;i++)
		cin>>a[i];
	quickSort(a,0,n);
	cout<<"sorted elements are\n";
	for(i=0;i<n;i++)
		cout<<a[i]<<"\n";
	return 0;
}

#include <algorithm> 
#include <iostream> 
#include <vector> 
using namespace std; 
  
int main() 
{ 
    int arr[100],n,key;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"enter key";
	cin>>key;
    vector<int> vect(arr, arr+n); 
	auto fi=lower_bound(vect.begin(),vect.end(), key); 
	cout<<fi-vect.begin();
	auto se=upper_bound(vect.begin(),vect.end(), key); 
	cout<<se-vect.begin();
	cout << count(vect.begin(), vect.end(), key); 
    return 0; 
}#include <algorithm> 
#include <iostream> 
#include <vector> 
using namespace std; 
  
int main() 
{ 
    int arr[100],n,key;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"enter key";
	cin>>key;
    vector<int> vect(arr, arr+n); 
	auto fi=lower_bound(vect.begin(),vect.end(), key); 
	cout<<fi-vect.begin();
	auto se=upper_bound(vect.begin(),vect.end(), key); 
	cout<<se-vect.begin();
	cout << count(vect.begin(), vect.end(), key); 
    return 0; 
}

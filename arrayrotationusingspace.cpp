#include<iostream>
using namespace std;
int main()
{
	int i,j,n,k,t,tc=0;
	cin>>t;
	

	for(tc=0; tc<t;tc++)
	{
		cin>>n>>k;
		int arr[n],b[k];
	for(i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	for(i=0; i<k; i++)
	{
		b[i]=arr[n-i-1];
	}
	for(j=0; j<k; j++)
	{
		
		for(i=n-1; i>=0; i--)
      	{
		  arr[i]=arr[i-1];
	    }

	}
	for(j=0; j<k; j++)
	     arr[j] = b[j];
	
		for(j=0; j<n; j++)
	{
		cout<<arr[j]<<" ";
	}
	cout<<endl;
    }
	return 0;
}

/*search element in a rotated and sorted array*/
#include <iostream>
using namespace std;

int binarysearch(int a[],int s, int e,int);
int main() 
{
	int n,i,item,s,e,mid;
	cin>>n;
	int a[n];
	for(i=0; i<n; i++)
			cin>>a[i];
	cout<<"enter item to search:";
	cin>>item;
	for(int i=1; i<=n-1 ;i++)
	{
		if(a[i-1]>a[i] && a[i]<a[i+1])
		{
		    mid =i;
		    break;
		   
	    }
	}
	if(item == a[mid])
	{
		cout<<"found at"<<mid+1;
	}
	else if(item>=a[0])
	{
		s=0;
		e=mid-1;
		binarysearch(a,s,e,item);
		   		
	}
	else
	{
		s=mid+1;
		e=n-1;
		binarysearch(a,s,e,item);
	}
        

	return 0;
}

int binarysearch(int a[],int s, int e,int item)
{

	while(s<=e)
	{
	   int mid= (s+ e)/2;
		if(a[mid] == item)
		{
			cout<<"found !!!! at location"<<mid+1;
			return 0;
		}
		    
		else if (a[mid]>item)
			e=mid-1;
		else
			s=mid+1;
    }
}

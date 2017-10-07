#include<iostream>
using namespace std;
#define size 20
int main()
{
	int i,j,l,k,n,m,count=0;
	cin>>n>>m>>k;
	int a[size],b[size],c[size];
	for(i=1; i<=size; i++)
	{
		a[i] = n*i;
		b[i] = m*i;
	}
	i=1;j=1;l=1;
	while(count != k)
	{
		if(a[i] < b[j])
		{
			c[l] = a[i];
			i++;
			l++;
		}
		else if(a[i] == b[j])
		{
			c[l] = a[i];
			i++;
			j++;
			l++;
		}
		else
		{
			c[l] = b[j];
			j++;
			l++;
		}
		count ++;
		
	}
	cout<<count<<endl;
	cout<<c[count];
	/*for(i=1; i<=size; i++)
	{
		cout<<"a"<<i<<"="<<a[i]<<"b"<<i<<"="<<b[i]<<"c"<<i<<"="<<c[i]<<endl;

	}*/
	return 0;
}

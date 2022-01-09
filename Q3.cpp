#include <bits/stdc++.h>
using namespace std;

int rob(int a[],int n)
{
	
	if(n==0)
		return 0;

	int v1=a[0];
	if(n==1)
		return v1;
	int v2=max(a[0],a[1]);
	if(n==2)
		return v2;

	int m;
	for(int i=2;i<n;i++)
	{
		m=max(a[i]+v1,v2);
		v1=v2;
		v2=m;
	}
	return m;
}

int main()
{
	int n;
	cin>>n; // Input of Size of array
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i]; // Input array elements
	}

	cout<<rob(a,n);
}

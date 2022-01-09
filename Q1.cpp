#include <bits/stdc++.h>
using namespace std;

int main()
{

	int n;
	cin>>n; // Input of Size of array
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i]; // Input array elements
	}

	int sum=0;
	for(int i=0;i<=n;i++)
	{
		sum += i;
	}
	for(int i=0;i<n;i++)
	{
		sum -= a[i];
	}
	cout<<sum;
}

#include <bits/stdc++.h>
using namespace std;

int calculate(int a[],int n, int t)
{
	int Closest_sum=INT_MAX;
	int sum=0;
	for(int i=0;i<n;i++)
	{
		int p=i+1,q=n-1;
		while(p<q)
		{
			sum=a[i]+a[p]+a[q];
			if(sum==t)
			{
				return sum;
			}
			if(abs(t-sum)<abs(t-Closest_sum))
			{
				Closest_sum=sum;
			}
			if(sum>t)
				q--;
			else
				p++;
		}
	}
	return Closest_sum;
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

	int target;
	cin>>target;

	sort(a,a+n);

	cout<<calculate(a,n,target);
}

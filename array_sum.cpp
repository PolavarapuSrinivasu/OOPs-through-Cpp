#include<iostream>
using namespace std;
int s=0;

void sum(int n,int a[])
{
	if(n!=-1)
	{
		s+=a[n];
		return sum(n-1,a);
	}
	cout<<s;
}

int main()
{
	int n;
	cin>>n;
	int a[n],i;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sum(n-1,a);
}

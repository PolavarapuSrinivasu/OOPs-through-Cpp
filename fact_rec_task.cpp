#include<iostream>
using namespace std;
int s=1;

void fact(int n)
{
	if(n!=0)
	{
		s=s*n;
		return fact(n-1);
	}
	cout<<s;
}

int main()
{
	int n;
	cin>>n;
	fact(n);
}

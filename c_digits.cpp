#include<iostream>
using namespace std;
int c=0;

void c_digits(int n)
{
	if(n!=0)
	{
		int r=n%10;
		c+=1;
		return c_digits(n=n/10);
	}
	cout<<c;
}

int main()

{
	int n;
	cin>>n;
	c_digits(n);
}

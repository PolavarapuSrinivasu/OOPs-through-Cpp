#include<iostream>
using namespace std;

void print_10to1(int i)
{
	if(i>=1){
		cout<<i<<" ";
		print_10to1(i-1);
	}
}

int main()
{
	print_10to1(10);
}

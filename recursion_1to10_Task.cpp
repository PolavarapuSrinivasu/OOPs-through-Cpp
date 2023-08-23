#include<iostream>
using namespace std;

void print_1to10(int i)
{
	if(i<=10){
		cout<<i<<" ";
		print_1to10(i+1);
	}
}

int main()
{
	print_1to10(1);
}

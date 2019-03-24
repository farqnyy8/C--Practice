//learning recursion

#include <iostream>

using namespace std;

int fib(int);

int main ()
{
	int n, answer;
	
	cout<<"Enter a number, n to fing its fibonacci nth value: ";
	cin>>n;
	
	answer = fib(n);
	
	cout<<answer;
	
	return 0;
}

int fib(int n)
{
	if (n<3)
	{
		return 1;
	}
	else
	{
		return (fib(n-2) + fib(n-1));
	}
}

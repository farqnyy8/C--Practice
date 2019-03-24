#include <iostream>

using namespace std;

inline int times_two (int);

int main()
{
	cout<<"Hello World\n\n";
	
	int num;
	
	cout<<"Enter a integer number to double it: ";
	cin>>num;
	
	cout<<"The double of "<<num<<" is "<<times_two(num);
	
	return 0;
}

int times_two (int num)
{
	return num * 2;
}





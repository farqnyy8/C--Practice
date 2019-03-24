//this program is used to raise a base to an index using the principle of recursion
#include <iostream>

using namespace std;

//function declaration
int power (int, int);


//main function
int main()
{
	int base, index, answer;
	
	//inputs
	cout<<"Enter base number: ";
	cin>>base;
	
	cout<<"Enter index number: ";
	cin>>index;
	
	
	//invoking the function
	answer = power(base, index);
	
	
	//output
	cout<<base<<" to power "<<index<<" is "<<answer;
	
	return 0;
}


//power function definition
int power (int base, int index)
{
	index--;//to raise to number of times
	if(index==0)
	return base;//stop when index is zero and return base
	else
	return base * power (base, index);//recursion
}


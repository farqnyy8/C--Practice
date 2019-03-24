#include <iostream>

using namespace std;

int swap(int* num1, int* num2)
{
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}

int main()
{
	
	cout <<"Enter size of array: ";
	int size;
	cin>>size;
	
	int* num = new int[size]; //dynamic array
	
	for(int i = 0; i < size; i++)
	{
		cin>>num[i];
	}
	
	for(int i = 0; i < size; i++)
		cout << num[i] << " ";
	
	
	return 0;
}

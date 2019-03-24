//reverse with pointers

#include <iostream>

using namespace std;


void display(int* numbers, int size)
{
	for(int i = 0; i < size; i++)
		cout << numbers[i] << " ";
}

void reverse(int* numbers, int size)
{
	for(int i = 0, j = size - 1; i < j; i++, j--)
	{
		int temp = numbers[i];
		numbers[i] = numbers[j];
		numbers[j] = temp;
	}
}

int main()
{
	int size;
	
	cout << "Enter size of array: ";
	cin >> size;
	
	int* numbers = new int[size];
	
	cout << "Enter " << size << " integers: ";
	for(int i = 0; i < size; i++)
		cin>>numbers[i];
		
	reverse(numbers, size);
	
	display(numbers, size);
	
	delete [] numbers;
	
	return 0;
}

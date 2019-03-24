
#include <iostream>
#include <memory>

using namespace std;

const int SIZE = 6;

unique_ptr<int[]> reverse(const int* list, int SIZE)
{
	unique_ptr<int[]> result(new int[SIZE]);
	
	for(int i = 0, j = SIZE - 1; i < SIZE; i++, j--)
		result[j] = list[i];
		
	return result;
}

void print(unique_ptr<int[]>& list, int SIZE)
{
		for (int i = 0; i < SIZE; i++)
		cout << list[i] << " ";
}

int main()
{
	int list[SIZE];
	
	cout << "Enter " << SIZE << " integers: ";
	
	for (int i = 0; i < SIZE; i++)
		cin >> list[i];
	
	
	return 0;
}

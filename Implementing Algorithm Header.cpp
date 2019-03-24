
#include <iostream>
#include <string>
#include <algorithm>


using namespace std;

void print(int* p, int size)
{
	cout << "Array: ";
	for(int i = 0; i < size; i++)
		cout << p[i] << " ";
	
	cout << endl;
}

int main()
{
	int size;
	
	cout << "Enter the size of array that you want to create: ";
	cin >> size;
	
	
	int* array = new int[size];
	
	for(int i = 0; i < size; i++)
		cin >> array[i];
		
	int * min = min_element(array, array + size);
	int * max = max_element(array, array + size);
	
	cout << "The min value is " << *min << " and the location is " << min - array << endl;
	cout << "The max value is " << *max << " and the location is " << max - array << endl;
	
	random_shuffle(array, array + size);
	print(array, size);
	
	sort(array, array + size);
	print(array, size);
	
	int key;
	
	cout << "Enter what you want to find: ";
	cin >> key;
	
	int * finder = find(array, array + size, key);
	
	if(finder!= array + size)
		cout << "The value " << *finder << " is found at position " << (finder - array ) << endl;
	else
		cout << "The value " << key << " is not found" << endl;
	
	return 0;
}

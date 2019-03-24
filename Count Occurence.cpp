

#include <iostream>
#include <string>


using namespace std;

const int SIZE = 10;

void display(int* p)
{
	for (int i = 0; i < SIZE; i++)
		cout << i << ": " << p[i] << endl;
}


void count(const string& s, int counts[], int size)
{
	for (int i = 0; i < size; i++) 
		counts[i] = 0;
		
	for (int i = 0; i < s.length(); i++)
	{
		counts[int(s[i]) - int('0')]++;
	}
	
	display(counts);
}

int* count(const string& s)
{
	int * nums = new int[SIZE];
	
	for (int i = 0; i < SIZE; i++) 
		nums[i] = 0;
		
	
	for (int i = 0; i < s.length(); i++)
	{
		nums[int(s[i]) - int('0')]++;
	}
	
	return nums;
}

int main()
{
	
	string numbers;
	
	cout << "Enter a data set of integer numbers to find their frequency: ";
	cin >> numbers;
	
	int * p = count(numbers);
	
	display(p);
	
	
	int counts[SIZE];
	
	string fredyy;
	
	cout << "Enter a data set of integer numbers[2] to find their frequency: ";
	cin >> fredyy;
	
	count(fredyy, counts, SIZE);
	
	
	return 0;
}

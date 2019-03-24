//this is a program to implement the bubble sort algorithm

#include<iostream>


using namespace std;

//global variables
const int SIZE = 10;

//function declaration
void enter_array(double[]);
void bubble_sort(double[]);

int main ()
{
	double numbers[SIZE];//declare array
	
	
	enter_array(numbers);//enter numbers into array
	
	cout<<"Original array is: ";
	
	for(int i =0; i<SIZE; i++)
	{
		cout<<numbers[i]<<" ";
	}
	cout<<endl; // display array before sort
	
	bubble_sort(numbers);//sort array 
	
	cout<<"Sorted array is: ";
	
	for(int i =0; i<SIZE; i++)
	{
		cout<<numbers[i]<<" ";
	}
	cout<<endl;//display array after sort
	
	
	return 0;
}

// function definition
void enter_array(double numbers[])
{
	
	cout<<"Enter the ten numbers to be sorted: ";
	
	for (int i = 0; i<SIZE; i++)
	{
		cin>>numbers[i];
	}
	cout<<endl;//enter array
	
	return;
}

void bubble_sort(double numbers[])
{
	bool change = true;
	
	do
	{
		change = false;
		for (int i=0; i<SIZE-1; i++)	
		{
			if(numbers[i]>numbers[i+1])
			{
				double temp;
				temp = numbers[i];
				numbers[i] = numbers[i+1];
				numbers[i+1] = temp;
				
				change = true;
			}//swap 
		}
	}while(change); // bubble sort algorithm
	
	cout<<endl;
	
	return;
}

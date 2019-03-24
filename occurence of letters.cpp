//occurence of letter program

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

//global vaiables
const int NUM_LET = 26; //26 letters
const int NUM_RAND_LET = 100; //hundred random letters

//functions declaration
void create_array(char []);
void display_array(char []);
void count_letters(char [], int[]);
void display_counts(int[]);

//main function
int main()
{
	//an array of random letters
	char chars[NUM_RAND_LET];
	
	//initialise array with random lowercase letters
	create_array(chars);
	
	//display the array of random characters
	cout << "The lowercase letter are: "<<endl;
	display_array(chars);
	
	//count letters
	int counts[NUM_LET];
	count_letters(chars, counts);
	
	//display counts
	cout << "The occurences of each letter are: " << endl;
	display_counts(counts);
	
	return 0; 
}

//function definition

// create_array function
void create_array(char chars[])
{
	srand(time(0));
	
	for (int i = 0; i< NUM_RAND_LET; i++)
		chars[i] = char( int('a') + rand() % 26 );
	
	return;
}

//display_array function
void display_array(char chars[])
{
	//display 20 per line
	for(int i = 0; i < NUM_RAND_LET; i++)
	{
		
		if((i + 1) % 20 == 0)
			cout << chars[i] << " "<<endl;
		else
		cout << chars[i] << " ";
	}
	
	return;
}

//count_letter function
void count_letters(char chars[], int counts[])
{
	//initialise the count array
	for(int i = 0; i < NUM_LET; i++)
		counts[i] = 0;
	
	for(int i = 0; i < NUM_RAND_LET; i++)
		counts[chars[i] - 'a']++;
		
	return;
}

//display_counts
void display_counts(int counts[])
{
	for(int i = 0; i < NUM_LET; i++)
	{
		
		if((i + 1) % 10 == 0)
			cout << counts[i] << " "<< char(i + int('a')) << endl;
		else
		cout << counts[i] << " " << char(i + int('a')) << " ";
	}
}

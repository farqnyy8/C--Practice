//this is a program to simulate the Galton Box or the Quincunx

#include <iostream>
#include <string>

using namespace std;

//function declaration
string enter_path(string);

int main ()
{
	int num, slots;
	string path;

	do
	{
		system("cls");
		
		cout<<"Enter Number of Balls: ";
		cin>>num;
		
		cout<<"Enter Number of Slots: ";	
		cin>>slots;
		
	}while(slots>50);
	
	for 
	
	path = enter_path(path, i);
	
	return 0;
}

//function definition
//enter path function
string enter_path(string path, const int i)
{
	cout<<"Path for Ball "<<i<<": ";
	getline(cin, path);
	
	return path;
}



#include <iostream>
#include <iomanip>
#include <fstream>


using namespace std;

int main()
{
//	cout << "Enter the name of the file you want to create: " << endl;
	string filename;
//	getline(cin, filename);
	
	
	fstream inout;
	
	inout.open("br.txt", ios::out);
	
	inout << "Dallas Texas Atlanta Little_Rock" << endl;
	
	inout.close();
	
	inout.open("br.txt", ios::in);
	
	string city;
	
	inout >> city;
	while(!inout.eof())
	{
		cout << city << " ";
		inout >> city;
	}
	
	inout.close();
	
	return 0;
}

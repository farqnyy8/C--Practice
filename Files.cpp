
#include <iostream>
#include <string>
#include <fstream>


int main()
{
	using namespace std;
	
	ifstream in;
	ofstream out;
	
	in.open("mydata.dat");
	
	if (!in)
		cout << "File not found." << endl; return 1;
	
	return 0;
}

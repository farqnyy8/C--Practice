//passing vectors into functions

#include <iostream>
#include <vector>

using namespace std;

//function declaration
void fill_vector(vector<int>&);//fill vector
void print_vector(const vector<int>&);//print vector
void reverse(const vector<int>&);//print vector in reverse


int main ()
{
	vector<int> myvector;
	
	fill_vector(myvector);
	print_vector(myvector);
	reverse(myvector);
	
	return 0;
}


//function definition
void fill_vector(vector<int> &mynewvector)
{
	int input;
	
	cout<<"Type in a list of number (-1 to stop0): ";
	
	cin>>input;
	
	while (input!=-1)
	{
		mynewvector.push_back(input);
		cin>>input;
	}
	
	cout<<endl;
	
	return;
}

void print_vector(const vector<int> &mynewvector)
{
	cout<<"Print Vector: "; 
	for(unsigned int i=0; i<mynewvector.size(); i++)
	{
		cout<<mynewvector[i]<<" ";
	}
	
	cout<<endl;
	return;
}

void reverse(const vector<int> &mynewvector)
{
	cout<<"Reverse Vector: ";
	for (unsigned i = mynewvector.size(); i>0; i--)
	{
		cout<<mynewvector.at(i-1)<<" ";
	}
	cout<<endl;
	return;
}

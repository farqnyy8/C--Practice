//learning vectors

#include <iostream>
#include <vector>

using namespace std;


int main ()
{
	vector<int> myvector;
	
	//inputing elements
	myvector.push_back(97);
	myvector.push_back(78);
	myvector.push_back(67);
	myvector.push_back(745);
	
	//printing to cout
	for (unsigned int i=0; i<myvector.size(); i++)
	{
		cout<<"myvector at "<<i<<" is "<<myvector.at(i)<<endl;
	}
	
	//adds element before specified index number
	myvector.insert(myvector.begin() + 2, 5);
	
	for (unsigned int i=0; i<myvector.size(); i++)
	{
		cout<<"myvector at "<<i<<" is "<<myvector.at(i)<<endl;
	}
	
	//erasing elements
	myvector.erase(myvector.begin()+2);
	
	for (unsigned int i=0; i<myvector.size(); i++)
	{
		cout<<"myvector at "<<i<<" is "<<myvector.at(i)<<endl;
	}
	
	// myvector.empty(): remving all elments in a vector
	if (myvector.empty())
	{
		cout<<endl<<"is empty";
	}
	else
	{
		cout<<endl<<"not empty";
	}
	
	//clearing a vector totally
	myvector.clear();
	
	//checking for emptiness
	if (myvector.empty())
	{
		cout<<endl<<"is empty";
	}
	else
	{
		cout<<endl<<"not empty";
	}
	
	return 0;
}

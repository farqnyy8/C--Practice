//using sizeof to find size of arrays and implementing it in console output of 2D arrays

#include <iostream>

using namespace std;


int main()
{
	int multab[4][3];
	
	//input
	for (unsigned int i=0; i<sizeof(multab)/sizeof(multab[0]); i++)
	{
		for (unsigned int j=0; j<sizeof(multab[0])/sizeof(int); j++)
		{
			cin>>multab[i][j];
		}
		cout<<endl;
	}
	
	//output
	for (unsigned int i=0; i<sizeof(multab)/sizeof(multab[0]); i++)
	{
		for (unsigned int j=0; j<sizeof(multab[0])/sizeof(int); j++)
		{
			cout<<multab[i][j]<<" "<<flush;
		}
		cout<<endl;
	}
	
	return 0;
}

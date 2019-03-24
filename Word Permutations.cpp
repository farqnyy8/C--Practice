//this program is for finding all the possible permutations of a word


#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

//function declaration
string getWord(); //to get word
void displayWord(const string); // to display word without num
void displayWord(const string, const int); // display with num
void sortVector(vector<string>&); // keep vector sorted always -- bubble sort
string shuffle(string); //randsomly shuffle word -- perm
int findNumPerm(string); //to find num of permutations
int findFact(int);
bool isExist(const vector<string>&, const string);//if the new shuffle word exist -- linear search 

int main()
{
	//get the word to be permuted
	string word = getWord();
	
	//assign the word to another variable perm
	string perm = word;
	
	//create vector of strings	
	vector<string> perms; 
	
	//make the original word the vector.at(0)
	perms.push_back(perm); 
	
	// find num of permutations
	int numPerm = findNumPerm(word); 
	
	//vector perm filling finding loop
	for (long i = 0; perms.size() < numPerm ; i++)
	{
		string permShuffled = shuffle(perm); //shuffle perm
	
		//check if it exist
		if(isExist(perms, permShuffled) == false)
		{
			perms.push_back(permShuffled);//add it
			sortVector(perms);//sort the vector
		}		
	}
	
	//display vector
	cout << " The various permutations of " << word << " are: " << endl ;
	
	for (long int i = 0; i < perms.size(); i++)
	{
		displayWord(perms.at(i), i);
	}
	
	return 0;
}

//function definition

//getWord function
string getWord()
{
	string word;
	
	cout << "Enter a word to find all the possible permutations of its letter (all in small caps): ";
	cin >> word;
	
	return word;
}

//display word with permutation number
void displayWord(const string disp, const int num)
{
	cout << "Permutation Number " << num <<": " << disp << endl;
}

//sort vector with binary sort
void sortVector(vector<string> &perms)
{
	int num = perms.size();

	bool change = true;
	
	do
	{
		change = false;
		for (int i = 0; i < num-1 ; i++)	
		{
			if( perms.at(i) > perms.at(i+1) )
			{
				string temp;
				temp = perms.at(i);
				perms.at(i) = perms.at(i+1);
				perms.at(i+1)= temp;
				
				change = true;
			}//swap 
		}
	}while(change); // bubble sort algorithm
	
	cout<<endl;
	
	return;
}


//shuffle function 
string shuffle(string perm)
{
	srand(time(0));
	
	for (int i = perm.size() - 1; i > 0; i--)
	{
		// Generate an index j randomly with 0 <= j <=i
		int j = rand() % (i + 1);
 		// Swap perm[i] with perm[j]
 		double temp = perm[i];
 		perm[i] = perm[j];
 		perm[j] = temp;
	}
	
	return perm;
}


//factorial function 1
int findNumPerm(string word)
{
	int n = word.size();
	
	int permNum = findFact(n); //pass into another function
	
	return permNum;
}
//factorial function 2
int findFact(int n)
{
	if (n==1)
	return 1;
	else 
	return n*findFact(n-1); //recursion
}


//linear search function
bool isExist(const vector<string> &perms, const string perm)
{
	
	int num = perms.size();
	
	for (int i = 0; i < num; i++)
	{
		if (perms.at(i) == perm)
		return true;
	}
	
	return false;
}

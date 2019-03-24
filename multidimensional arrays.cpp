// multi dimensional array

#include <iostream>
#include <ctime>
#include <cstdlib>


using namespace std;


//global variables
const int ROW = 5;
const int COL = 2; // COL FOR COLUMN

int main ()
{
	//set seed
	srand(time(0));
	
	int matrix [ROW][COL];
	
	
	//input everything
	for (int row = 0; row < ROW; row++)
	{
		for(int col = 0; col < COL; col++)
		cin>>matrix[row][col];
	}
	
	
	//output everything
	for (int row = 0; row < ROW; row++)
	{
		cout<<endl;
		
		for(int col = 0; col < COL; col++)
		cout<<matrix[row][col]<<" ";
	}
	
	//find the sum of everything
	int total_everything = 0;
	for (int row = 0; row < ROW; row++)
	{
		for(int col = 0; col < COL; col++)
		total_everything += matrix[row][col];
	}
	cout<<"\n\ntotal_everything: "<<total_everything<<"\n\n";
	
	
	//summing by column
	for (int col = 0; col < COL; col++)
	{
		int total= 0;
		
		for(int row = 0; row < ROW; row++)
			total += matrix[row][col];
		cout<<"total for column "<<col<<" is "<<total<<endl;
	}
	
	//row with largest sum
	int max_row = 0;
	int index_of_max_row = 0;
	
	for (int col = 0; col < COL; col++)
		max_row += matrix[0][COL];
	
	for (int row = 1; row < ROW; row++)
	{
		int total_of_this_row = 0;
		
		for (int col = 0; col < COL; col++)
			total_of_this_row += matrix[row][col];
		
		if (total_of_this_row > max_row)
		{
			max_row = total_of_this_row;
			index_of_max_row = row;
		}
			
	}
	
	cout <<"Row "<<index_of_max_row<<" has the maximum sum of "<<max_row<<endl;
	
	//random shuffling
	for (int row = 0; row < ROW; row++)
	{
		for(int col = 0; col < COL; col++)
		{
			int i1 = rand() % ROW;
			int j1 = rand() % COL;
			
			//swap matrix[i][j] with matrix[i1][j1]
			int temp = matrix[row][col];
			matrix[row][col] = matrix[i1][j1];
			matrix[i1][j1] = temp;
		}
	}
	
	//output after shuffling
	//output everything
	for (int row = 0; row < ROW; row++)
	{
		cout<<endl;
		
		for(int col = 0; col < COL; col++)
		cout<<matrix[row][col]<<" ";
	}
	
	return 0;
}

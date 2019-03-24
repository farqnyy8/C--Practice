

#include <iostream>
#include <vector>

using namespace std;

const int COL = 3;
const int ROW = 4;

int main()
{
	
	vector<vector<int> > vector_matrix;
	int num;
	int vector_sum = 0;
	
	cout << "Enter a 3 by 4 matrix or integers: ";
	
	for(int i = 0; i < vector_matrix.size(); i++)
		for(int j = 0; j < vector_matrix[i].size(); j++)
		{
//			cin >> num;
//			vector_matrix.at(i).push_back(num);
//			vector_sum += vector_matrix[i][j];
		}
	
	for(int i = 0; i < ROW; i++)
	{
		for(int j = 0; j < COL; j++)
		{
			cout << vector_matrix[i][j] << " ";
		}
		cout << endl;
	}
	
	cout << "Sum of elements in vector_matrix: " << vector_sum << endl;
	
	for (int i = 0; i < ROW && i < COL; i++)
		cout << vector_matrix[i][i] << " ";

	return 0;
	
}

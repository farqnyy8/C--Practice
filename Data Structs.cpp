

#include <iostream>
#include <vector>

void print(int num)
{
	//num = 890;
	std::cout << num << std::endl;
}

int main()
{
	std::vector<int> myvec;
	
	myvec.push_back(123);
	
	print(myvec.front());  
	
	return 0;
}

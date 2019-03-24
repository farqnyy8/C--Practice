

#include <iostream>
#include <string>


using namespace std;

template <typename T>
void print_max(const T& t1, const T& t2)
{
	if (t1 >= t2)
		cout <<"Max of " << t1 <<" and " << t2 << " is " << t1 << endl;
	else 
		cout <<"Max of " << t1 <<" and " << t2 << " is " << t2<< endl;
}

int main()
{
	string name1, name2;
	char grade_letter1, grade_letter2;
	float grade1, grade2;
	int num1, num2;
	
	cout << "Enter two strings: ";
	cin >> name1 >> name2;
	
	cout << "Enter two chars: ";
	cin >> grade_letter1 >> grade_letter2;
	
	cout << "Enter two floats: ";
	cin >> grade1 >> grade2;
	
	cout << "Enter two integers: ";
	cin >> num1 >> num2;
	
	print_max(name1, name2);
	print_max(grade_letter1, grade_letter2);
	print_max(grade1, grade2);
	print_max(num1, num2);
	
	return 0;
}


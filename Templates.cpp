

#include <iostream>
#include <string>

using namespace std;

template <typename T>

T maxvalue (T one, T two) {
	if (one >= two)
		return one;
	else
		return two;
}

int main(){
	
	cout << "Max of " << 5 << " and " << 6 << " is " << maxvalue(5,6 ) << endl;
	
	return 0;
}


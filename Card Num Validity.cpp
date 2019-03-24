//this program is for finding the validity of a credit or debit card number 
//

#include <iostream>
#include <string>

using namespace std;

//functions declaration
bool cardType(const string);
int firstTest(const string);
int getDigit(const int);
int secondTest(const string);
bool checkValidity(const int, const int);
void printResults(const string, const bool);

//main function
int main ()
{
	string cardNum;
	
	cout<<"Enter the Card Number: ";
	getline(cin, cardNum);
	
	string typeChecker="**";
	
	for(int i = 0; i < 2; i++)
	{
		typeChecker[i] = cardNum[i];
	}//to create a sub string typechecker
	
	bool type = cardType(typeChecker);
	
	if (type==false)
	{
		printResults(cardNum, type);//end the program and print results if the type is not found
		
	}
	else//else
	{
		int firstCheck = firstTest(cardNum);//first check is invoked
		int secondCheck = secondTest(cardNum);//second check is invoked
		bool validity = checkValidity(firstCheck, secondCheck);//validity checker is invoked
		printResults(cardNum, validity);//print results
	}
	system ("pause");
	
	return 0;
}


//functions declaration

//card type function
bool cardType(const string typeChecker)
{
	
	if (typeChecker[0]=='4')//4 for visa cards
	return true;
	else if ((typeChecker[0]=='3') && ( (typeChecker[1]=='7')))//37 for american express cards
	return true;
	else if (typeChecker[0]=='6')//6 for discover cards
	return true;
	else if (typeChecker[0]=='5')//5 for master cards
	return true;
	else
	return false;
}

//first Test funtion
int firstTest (const string cardNum)
{
	cout<<endl;
	
	int firstCheck = 0;
	for (int i = cardNum.size() - 2; i >= 0; i--)
	{
		int y = int(cardNum[i]) - int('0');
		firstCheck += getDigit(y); //adding the return value from getDigit function
		i--;//my compiler did not allow me use "i-2" as the continuation factor so I improvised
	}
	
	// cout<<"First Check: "<<firstCheck<<endl; I used it to check if the program was funtioning well
	
	return firstCheck;
}

//get Digit function
int getDigit(int num)
{
	if(num<=4)
	{
		// cout<<"In getdigit function, num = "<<num*2<<endl; I used it to check if the program was funtioning well
		return num * 2; //return twice the number if the number is less than 4 (n*2 >=8)
	}
	else
	{
		int y = ((num*2) % 10) + ((num * 2) / 10);//used another variable for simplicity
		// cout<<"In getdigit function, num (y) = "<<y<<endl; I used it to check if the program was funtioning well
		return y;//else, return the sum of the first and second digit of twice the number 
	}
}


//second test function
int secondTest(const string cardNum)
{
	cout<<endl;
	int secondCheck = 0;
	
	// cout<<"in second test function, cardNum.size() is "<<cardNum.size()<<endl; I used it to check if the program was funtioning well
	
	for(int i = (cardNum.size() - 1); i >= 0; i--) //adding odd placed number from right to left
	{
		int odd = int(cardNum[i]) - int('0');
		// cout<<"odd in secondtest is "<<odd<<endl; I used it to check if the program was funtioning well
		secondCheck += odd; 
		i--;//my compiler did not allow me use "i-2" as the continuation factor so I improvised
	}
	
	// cout<<"Second Check: "<<secondCheck; I used it to check if the program was funtioning well
	
	return secondCheck;
}

//validity checker function
bool checkValidity(const int firstTest, const int secondTest)
{
	if (((firstTest + secondTest) % 10) == 0 )
	return true;
	else
	return false;
}

void printResults(const string cardNum, const bool valid)
{
	string value;
	switch(valid)
	{
		case true: value = "a Valid Card"; break;
		case false: value = "an Invalid Card"; break;
	}
	cout<<"Your credit card with card number "<<cardNum<<" is "<<value << endl;
	
	return;
}

//programming 1 finals review

//libraries or headers
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

//global variables
const int SIZE = 8;

//functions declaration
void hospital_menu(char&);
void add_new_patient(string, string, string, int, int, int, char);
void search_patient();
void print_all();
void delete_patient();


int main()
{
	//local varibles
	char option, gender;
	string id, name, address, search_id;
	int month, day, year;   
	//code
	
	do
	{	system("cls");
		hospital_menu(option);
		
		switch(option)
		{
			case 'a': add_new_patient(id, name, address, month, day, year, gender); break;
			case 'b': search_patient(); break;
			case 'c': delete_patient(); break;
			case 'd': print_all(); break;
			case 'e': system("exit");break;
			default: cout<<"ERROR"<<endl;
		}
	}while (option != 'e' && option != 'E');
	
	return 0;                                                                                                                                                           
}


//functions definition

//hospital_menu function
void hospital_menu(char& choice)
{
cout<<"Arkansas Children Hospital\n";
cout<<"a. Add new patient record\n";
cout<<"b. Search record\n";
cout<<"c. Delete a record\n";
cout<<"d. Print all records\n";
cout<<"e. Exit\n";
cout<<"Enter your choice HERE=> ";
cin>>choice;
	
	return;
}

//add_patient function
void add_new_patient(string id, string name, string address, int month, int day, int year, char gender)
{
	//local var
	char sp;
	
	//code
	cout<<"Enter Patient ID: ";  
	cin>>id;
	cin.ignore();
	
	cout<<"Enter Patient Name: ";  
	getline(cin, name);
	
	cout<<"Enter Patient Address: "; 
	getline(cin, address);
	
	cout<<"Enter Patient Date of Birth(mm/dd/yy): "; 
	cin>>month>>sp>>day>>sp>>year;
	
	cout<<"Enter Patient Gender(M or F): "; 
	cin>>gender;
	
	ofstream write; //1.create a stream ofstream
	write.open("Patient.txt", ios::app); //2. open file
	
	if(write.fail())//3. check if file opened
	{
		cout<<"ERROR: Cannot open this file"<<endl;
	}
	
	//4.start writing into file
	write<<id<<"\t"<<name<<"\t"<<address<<"\t"<<month<<"\t"<<day<<"\t"<<year<<"\t"<<gender<<endl; 
	
	return;              
}

//search_patient function
void search_patient()
{
	string f_name, l_name, line, month, day, year;
	char sp;
	string patient_info[SIZE];
	
	
	cout << "Enter Patient's First Name: ";
	cin >> f_name;
	
	cout << "Enter Patient's Last Name: ";
	cin >> l_name;
	
	cout << "Enter Patient's DOB (m/d/y): ";
	cin >> month >> day>> year;
	
	ifstream read;
	
	read.open("Patient.txt");
	
	if(read.fail())//check if file opened
	{
		cout<<"ERROR: Cannot open this file"<<endl;
		system("exit");
	}
	
	bool flag = false;
	
	while(!read.eof())
	{
		
		for(int i =0; i < SIZE; i++)
		{
			read >> line;
			
			patient_info[i] = line;
		}
		
		
		if (f_name == patient_info[1] && l_name == patient_info[2] && month == patient_info[4] && day == patient_info[5] 
		&& year == patient_info[6])
		{
			cout << "Patient Info: ";
			
			for(int i =0; i < SIZE; i++)
			{
				cout <<  patient_info[i] << " ";
			}
			
			flag = true;
			
			break;
		}
				
	}
	
	
	if (flag == false)
	{
		cout << "This is a new patient, please select option a from the menu" << endl;
	}
	
	read.close();
	
	return;
}

//print_all function
void print_all()
{
	string line;
	
	ifstream read;
	read.open("Patient.txt");
	
	while(!read.eof())
	{
		getline(read, line);
		cout << line << endl;
	}
	
	read.close();
	
	system("pause");
	
	return;
}

/*delete_patient function
process = find patient and copy all other lines into new file with the patient as an execption
*/

void delete_patient()
{
	string f_name, l_name, line, month, day, year;
	char sp;
	string patient_info[SIZE];
	
	
	cout << "Enter Patient's First Name: ";
	cin >> f_name;
	
	cout << "Enter Patient's Last Name: ";
	cin >> l_name;
	
	cout << "Enter Patient's DOB (m/d/y): ";
	cin >> month >> day >> year;
	
	ifstream read;
	
	read.open("Patient.txt");
	
	if(read.fail())//check if file opened
	{
		cout<<"ERROR: Cannot open this file"<<endl;
		system("exit");
	}
	
	bool flag = false;
	
	while(!read.eof())
	{
		
		for(int i =0; i < SIZE; i++)
		{
			read >> line;
			
			patient_info[i] = line;
		}
		
		
		if (f_name != patient_info[1] && l_name != patient_info[2] && month != patient_info[4] && day != patient_info[5] 
		&& year != patient_info[6])
		{
			ofstream write;
			
			write.open("NewPatientFile.txt", ios::app);
			
			for (int i = 0; i < SIZE; i++)
			{
				write << patient_info[i] << " ";
			}
			
			write << endl;
			
			write.close();
			flag = true;
		}
	}
	
	if (flag == false)
	{
		cout << "This patient is not on the database" << endl;
	}
	
	system("pause");
	
	read.close();
	
	return;
}

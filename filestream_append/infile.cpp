#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
using namespace std;

char menu();
void addstudent(string filename);
void display(string filename);

void main () {
	const string filename = "student.dat";
	ifstream infile;
	ofstream outfile;
	char ch;
	
	do {
		system("cls");
		ch = menu();
		
		switch(ch){
		case '1': addstudent(filename); break;
		case '2' : display(filename); break;
		}


	} while(ch != '0');
}

char menu () {
	char ch;
	cout<<"Enter choice\n";
	cout<<"1. Add student\n";
	cout<<"2. Display student\n";
	cout<<"0. Exit program\n";
	cin>>ch;
	return (ch);
}

void addstudent(string filename) {
	ofstream outfile(filename.c_str(), ios_base::out | ios_base::app);
	outfile.is_open();
		string id, name;
		cout<<"\n Add Student \n";
		cout<<"Enter id : ";
		cin>>id;
		cout<<"Enter name : ";
		cin>>name;

		// write data
		outfile<<id<<" " <<name<<endl;
		outfile.close();
		
		char wait;
		cin.get(wait);
		cout<<"saved already, press enter to continue";
		cin.get(wait);

}

void display(string filename) {
	ifstream infile(filename.c_str(), ios_base::in);
	infile.is_open();
	
	string id, name;
	string line(30,'=');
	int n =0;
	cout<<"\nList Student \n";
	cout<<line<<endl;
	cout<<"No. id name \n";
	cout<< line <<endl;

	// read data from file
	infile>>id>>name;
	while(!infile.eof()){
		n += 1;
		cout<<right<<setw(3)<<n<<":";
		cout<<left<<setw(6)<<id;
		cout<<left<<setw(6)<<name<<endl;
		infile>>id>>name;
	}

	infile.close();

	char wait;
	cin.get(wait);
	cout<<"plz Enter to contnue\n";
	cin.get(wait);
}
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

void main () {
	string filename;
	ifstream infile;
	ofstream outfile;

	cout<<"Enter file name: ";
	cin>>filename;

	cout<<endl;

	outfile.open(filename.c_str()); 

	cout<<"Now open file "<< filename << "for wirte"<<endl;
	
	string id, name, surname;
	int score;

	for (int i =0; i <=1; i ++) {
		cout<<"Enter id: ";
		cin>>id;

		cout<<"Enter name : ";
		cin>>name;

		cout<<"Enter surname : ";
		cin>>surname;
		
		cout<<"Enter score : ";
		cin>>score;

		outfile<<id<<" " <<name<< surname <<" "<<score<<endl;
	}
		cout<<endl;

		outfile.close();

		cout<<"File was close!"<<endl;

		//read file

		infile.open(filename.c_str());
		cout<<"Now is open file" << filename <<" for read "<<endl;

		string read_id, read_name, read_surname;
		for (int j=0; j <=1; j++) {
			infile>> read_id >> read_name >> read_surname;
			cout<<read_id<<" "<<read_name<<" "<<read_surname<<endl;
		}

		cout<<endl;
		infile.close();
}
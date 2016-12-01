#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void min (int data[], const int index);
void printMin (int data[], const int index);

void max (int data[], const int index);
void printMax (int data[], const int index);

void input (int data[], const int index);

void main () {
	const int index = 5;
	int data[index];
	char ch;
	bool passInput = false;
	
do {
	cout<<"1. input data  \n";
	cout<<"2. show Min \n";
	cout<<"3. show Max \n";
	cout<<"4. Exit program \n";
	cout<<"======================\n";
	cout<<"Enter your choice :";
	cin>>ch;

	switch (ch) {
		case '1' : input(data, index); min(data, index); passInput=true; break;
		case '2' : (passInput == true) ? printMin(data, index) : cout<<"Pls insert number \n";   break;
		case '3' : (passInput == true) ? printMax(data, index) : cout<<"Pls insert number \n";   break;
		case '4' : cout<<"Exit program \n"; break;
	}
}while(ch != '4');
	cout<<endl;

}

void input (int data[], const int index) {
	for (int i=0; i < index; i++) {
		cout<<"Enter num ["<<i+1<<"] : ";
		cin>>data[i];
	}
}

void min (int data[], const int index) {
	sort(data, data + index);
}

void max (int data[], const int index) {
	printMax(data, index);
}

void printMin (int data[], const int index) {
	for (int i=0; i < index; i++) {
		cout<<data[i]<<" ";
	}
	cout<<endl;
}

void printMax (int data[], const int index) {
	for (int i = index-1; i >= 0; i--) {
		cout<<data[i]<<" ";
	}
	cout<<endl;
}


﻿#include<iostream>
#include<string>
#include<algorithm>
using namespace std;


void main () {
	char text[1][50];

	int count = 0;
	
	cout<<"Enter text : ";
	cin>>text[0];


	for (int i=0; i < 50; i++) {
		if (text[0][i] == NULL) i=100; // not loop
		else  count++; 
	}

	int check = count;
	bool checkPal = false;

	for (int r=0; r < count/2; r++) {
		cout<<text[0][r]<<" = " << text[0][check-1]<<endl;

		if(text[0][r] == text[0][check-1]) { checkPal = true; }
		else if (text[0][r] != text[0][check-1]) { checkPal= false;  break; }

		check -= 1;
	}

	if (checkPal == true && count%2 == 0) cout<<"Your text is palindrome .";
	else if (checkPal == false) cout<<"Your text is not palindrome";
	else if (checkPal == true) cout<<"Your text is not palindrome";

	cout<<endl;
}

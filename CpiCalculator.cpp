#include<bits/stdc++.h> 
using namespace std;

void calculateSpi(){
	int NoOfSubs;
	int sum = 0;
	int total;
	int totalCredits = 0;

	system("cls");
	cout << "___________________________________" << endl;
	cout << "|                                 |" << endl;
	cout << "|          SPI CALCULATOR         |" << endl;
	cout << "|                                 |" << endl;
	cout << "|_________________________________|" << endl;

	cout << " Enter No of Subjects : ";
	cin >> NoOfSubs;

	int credits[NoOfSubs];
	int points[NoOfSubs];

	cout << endl;
	for(int i = 0; i < NoOfSubs; i++){

		cout << "Enter credits of the subject" << i+1 << " : ";
		cin >> credits[i];
		cout << "Enter points of the subject" << i+1 << " : ";
		cin >> points[i];
		cout << "___________________________________" << endl << endl;

	}

	for(int i = 0; i < NoOfSubs; i++){

		total = credits[i]*points[i];
		sum += total;

		totalCredits += credits[i];
	}

	cout << endl << endl;
	cout << "Total Points: " << sum << endl;
	cout << "Total credits: " << totalCredits << endl;
	cout << "Total SPI: " << (sum*1.0)/totalCredits << endl;

	getchar();

}


void calculateCpi(){
	system("cls");
	int NoOfSems;
	cout << "___________________________________" << endl;
	cout << "|                                 |" << endl;
	cout << "|          CPI CALCULATOR         |" << endl;
	cout << "|                                 |" << endl;
	cout << "|_________________________________|" << endl;

	cout << "Enter no. of semesters : ";
	cin >> NoOfSems;

	double semesters[NoOfSems];
	int credits[NoOfSems];
	double semTotal = 0;
	int credsTotal = 0;

	for(int i = 0; i < NoOfSems; i++){

		cout << "Enter semester - " << i+1 << " SPI: ";
		cin >> semesters[i];
		cout << "Enter credits of semester - " << i+1 << " ";
		cin >> credits[i];

		semTotal += semesters[i]*credits[i];
		credsTotal += credits[i];
	}  

	cout << "Your CPI : " << (1.0*semTotal)/credsTotal << endl;

	getchar();

}





void instructions(){
	system("cls");
	cout << endl << endl;
	cout << "How to calculate Spi and Cpi : " << endl;
	cout << "___________________________________" << endl;
	cout << "                                   " << endl;
	cout << " SPI = Sum of (Credits*Points )/ total No of credits" << endl << endl;
	cout << " CPI = Sum of SPI / No of semesters " << endl;

	cout << endl << endl;
	cout << "Grade - points table: " << endl;
	cout << "___________________________________" << endl;
	cout << "                                   " << endl;
	cout << "	A*/A 				10" << endl;
	cout << "	B+			       	 9" << endl;
	cout << "	B		     		 8" << endl;
	cout << "	C+    				 7" << endl;
	cout << "	C		    		 6" << endl;
	cout << "	D+   				 5" << endl;
	cout << "	D    				 4" << endl;
	cout << "	E		     		 0" << endl;
	cout << "	F	     			 0" << endl;
	cout << "	I     				 0" << endl;

	getchar();
}

int main(){
	system("cls");
	do {
		cout << "___________________________________" << endl;
		cout << "|                                 |" << endl;
		cout << "|        SPI/CPI CALCULATOR       |" << endl;
		cout << "|                                 |" << endl;
		cout << "|___________|" << endl;
		cout << "1. calculate SPI" << endl;
		cout << "2. calculate CPI" << endl;
		cout << "3. How to calculate SPI/CPI?" << endl;
		cout << "4. Exit" << endl;
		cout << "Select option : ";
		char op = getchar() ;

		if(op == '1') calculateSpi();
		if(op == '2') calculateCpi();
		if(op == '3') instructions(); 
		if(op == '4') exit(0);  

	}while(1);

	return 0;
}
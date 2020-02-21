// Anjolaoluwa_Tope-Babalola_Assignment_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

// These are three basic recursive functions
double sumover(unsigned int num);
long long int factorial(long long int num);
long long int fibonnacci(long long int num);
long long int tribonnacci(long long int num);
void tower(const int& number, int from,  int to);

int main()
{
	int option;
	int num1=0;
	int num2=0;
	int num3=0;
	int num4 = 0;
	int num5 = 0;
	int from=0;
	int to=0;
	char answer;


	// this loop runs while the user wants to continue running the program
	do {
		// this is a menu 
	cout << "*******************************************************************************************************************" << endl;
	cout << "* Select any of this cases   *" << endl;
	cout << "* 1.sumover                  *" << endl;
	cout << "* 2.Factorail                *" << endl;
	cout << "* 3.Tower                    *" << endl;
	cout << "* 4.Fibonacci sequence       *" << endl;
	cout << "* 5.Tribonacci sequence      *" << endl;
	cout << "*******************************************************************************************************************" << endl;
	cout << "Please choose your option" << endl;
	cin >> option;
	cout <<  endl;

	// This is a test case for when the user picks a number other than what was specified 
	while (option != 1 && option != 2 && option != 3 && option != 4 && option != 5) {
		cout << "Please try again wrong input" << endl;
		cin >> option;
		cout <<  endl;
	}

	// this are are output statements for when the user picks a number
	if (option == 1) {
		cout << "This is a function that calculates the sum of the reciprocals of the first n positive integers" <<endl;
		cout << "*******************************************************************************************************************" << endl;
		cout << "Please input a number" << endl;
		cin >>num1;
		cout << "*******************************************************************************************************************" << endl;
		cout << "The sum of the recipocals  of the first " << num1 << " elements is " << sumover(num1) << endl;

	}else if (option == 2) {
		cout << "This is a function that calculates the factorial of the first n positive integers" << endl;
		cout << "*******************************************************************************************************************" << endl;
		cout << "Please input a number" << endl;
		cin >> num2;
		cout << "*******************************************************************************************************************" << endl;
		cout << "The factorail of the number is " <<factorial(num2) << endl;
	}else if (option == 3) {
		cout << "This is a tower of Honoi function, the function will show the steps it takes to completely move n number of disks from one pole to another" << endl;
		cout << "******************************************************************************************************************************************" << endl;
		cout << "The following rules must be obeyed: " << endl;
		cout << "There are only three poles" << endl;
		cout << "You can only move one disk at a time" << endl;
		cout << "At the start each disk is smaller than the disk it is upon" << endl;
		cout << "A big disk can not stay ontop of a small disk" << endl;
		cout << "*******************************************************************************************************************" << endl;
		cout << "How mny disks do you want to move" << endl;
		cin >> num3;
		cout <<"Where do you want to move the disk from "<< endl;
		cin >> from;
		cout << " Where do you want to move the disk to " << endl;
		cin >> to;
		cout << endl;
		tower(num3, from, to);
		cout << endl;
	}
	else if (option == 4) {
		cout << "This is a function that calculates the fibonacci sequence "<< endl;
		cout << "The Fibonacci numbers, commonly denoted F(n) form a sequence, called the Fibonacci sequence, such that each number is the sum of the two preceding ones, starting from 0 and 1. That is," <<endl;
		cout << "F(0) = 0,   F(1) = 1" << endl;
		cout << "F(N) = F(N - 1) + F(N - 2), for N > 1." << endl;
		cout << "0 <= N <= 30." << endl;
		cout << "*******************************************************************************************************************" << endl;
		cout << "Please input a number" << endl;
		cin >> num4;
		cout << "*******************************************************************************************************************" << endl;
		cout << "The sum of the fibonnaci sequence from " << num4 << "  is " << fibonnacci(num4) << endl;
	}
	else if (option == 5) {
		cout << "This is a function that calculates the Tribonnaci sequence " << endl;
		cout << "The tribonacci numbers, commonly denoted T(n) form a sequence, called the Tribonacci sequence." << endl;
		cout << "The Tribonacci sequence Tn is defined as follows: "<<endl;
		cout << "T0 = 0, T1 = 1, T2 = 1, and Tn + 3 = Tn + Tn + 1 + Tn + 2 for n >= 0."<<endl;
		cout << "0 <= n <= 34" << endl;
		cout << "*******************************************************************************************************************" << endl;
		cout << "Please input a number" << endl;
		cin >> num5;
		cout << "*******************************************************************************************************************" << endl;
		cout << "The sum of the tribonacci sequence from " << num5 << "  is " << tribonnacci(num5) << endl;
	}
	cout << "*******************************************************************************************************************" << endl;
	cout << "Do you want to continue? " << endl;
	cout << "Type y for yes or n for no " << endl;
	cin >> answer;
	// this converts uppercse character to lowercase 
	char hold;
	hold = tolower(answer);
	answer = hold;

	//this is a test case to ensure the user picks y or n
	while (answer !=  'y'  && answer != 'n') {
		cout << "Do you want to continue? " << endl;
		cout << "Type y for yes or n for no " << endl;
		cin >> answer;

		char hold;
		hold = tolower(answer);
		answer = hold;
	}

	} while (answer == 'y');// break condition for the loop
}


//This is a function that calculates the sum of the reciprocals of the first n positive integers
double sumover(unsigned int num) {

	if (num == 0.0) {
		return 0.0;
	}else if (num == 1.0) {
		return 1.0;
	}
	return	(double) (1.0 / num) + sumover((num - 1));
	}

	
//This is a function that calculates the factorial n positive integers
long long int factorial(long long int num){
	long long int result;

	if (num == 0) {
		return 0;

	} else if (num != 1)
		num=num* factorial(num - 1);
	else
		return 1;

	return  num;

}

//This is a tower of Honoi function, the function will show the steps it takes to completely move n number of disks from one pole to another"
void tower( const int& number, int from, int to) {

	

	if (number == 1) {
		cout << "the Disk is moved from pole " << from << " to pole " << to << endl;
	}
	else {
		int empty = 6 - from - to;
		tower(number - 1 , from, empty);
		cout << "the Disk is moved from pole " << from << " to pole " << to<< endl;
		tower(number - 1, empty, to);

	}


};



//This is a function that calculates the fibonacci sequence
long long int fibonnacci(long long int num) {
	if (num == 0) {
		return 0;
	}
	else if (num == 1) {
		return 1;
	}
	else {
		return fibonnacci(num - 1) + fibonnacci(num - 2);
	}
}


//This is a function that calculates the tribonacci sequence
long long int tribonnacci(long long int num) {
	if (num == 0) {
		return 0;
	}
	else if (num == 1) {
		return 1;
	}
	else if (num == 2) {
		return 1;
	}
	else {

		return tribonnacci(num - 1) + tribonnacci(num - 2) + tribonnacci(num - 3);
	}

}


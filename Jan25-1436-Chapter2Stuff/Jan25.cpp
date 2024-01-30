#include<iostream> //these things <> are called "angle brackets"

using namespace std;

int main() //parentheses (parenthesIs -> singular) 
{ //open brace

	//int int = 42; 


	//cout << "Hello world" << endl; 

	////char
	////	int 
	////	double 
	////	return //"syntax highlighting" -> making certain things a certain color 

	//cout << 5 + 2 << endl; //arithmetic expression 
	//cout << (5 < 2) << endl; //comparison expression 
	//cout << "hello, world" << endl; //string of characters
	//cout << 5.1 + 2.73 << endl; 
	//string firstWord = "alpha";
	//string secondWord = "beta";

	////cout << "alpha" + "beta" << endl; //syntax
	//cout << firstWord + secondWord << endl; //??? concatenation!
	//cout << "25 / 6 = " << 25 / 6 << endl; 
	//cout << " 25 % 6 = " << 25 % 6 << endl;
	//cout << "25.0/6 = " << 25.0 / 6 << endl; 

	int dozen = 13.6987987978; 
	
	auto firstLetter = 'c';
	char secondLetter = 'a'; 

	cout << "First letter - second letter: " << firstLetter - secondLetter << endl;
	cout << "MULTIPLYING chars: " << firstLetter * secondLetter << endl; 

	float pi = 3.14f; 
	double higher_precision_pi = 3.14159; //doubles are HIGHER precision versions of floats!
	cout << "PI to float precision is: " << pi << endl;
	cout << "PI with HIGHER precision is: " << higher_precision_pi << endl;
	cout << "e is " << 2.71 << endl; //the base of the natural logarithm

	//INT anumber = 42; 


	cout << 12 << "\t" << dozen << endl; // backslash (\) t makes a "tab" (a few spaces) 

	return 0; 
} //close brace
#include<iostream> //these things <> are called "angle brackets"

using namespace std;

int main() //parentheses (parenthesIs -> singular) 
{ //open brace
	cout << "Hello world" << endl; 

	//char
	//	int 
	//	double 
	//	return //"syntax highlighting" -> making certain things a certain color 

	cout << 5 + 2 << endl; //arithmetic expression 
	cout << (5 < 2) << endl; //comparison expression 
	cout << "hello, world" << endl; //string of characters
	cout << 5.1 + 2.73 << endl; 
	string firstWord = "alpha";
	string secondWord = "beta";

	//cout << "alpha" + "beta" << endl; //syntax
	cout << firstWord + secondWord << endl; //??? concatenation!
	cout << "25 / 6 = " << 25 / 6 << endl; 
	cout << " 25 % 6 = " << 25 % 6 << endl;
	cout << "25.0/6 = " << 25.0 / 6 << endl; 
	return 0; 
} //close brace
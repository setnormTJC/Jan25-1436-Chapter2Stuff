#include <iostream>

using namespace std;

int main()
{

	//int product = 2 · 3;

	//int product = 2(3); //() is the "function call operator" (high-fallutin'!) 
	////5 () 2
	////int x = 2; 
	//int y = 3; 
	//int xy = 2 x 3; 


	//int zed = xy; 


	////cout << (3 ^ 3) << endl; //27 = 3(3)(3) 


	////cout << 3 * 7 - 6 + 2 * 5 / 4 + 6 << endl; //relates to "order of operations" 
	//											//and operator PRECEDENCE
	//											// PEMDAS 
	////cout << “Dexter” << endl; //"smart quotes" -> stupid quotes

	//cout << (int)5.2 << endl; //"C-style cast" (typecasting) -> Arnold Schwarzenegger 

	//cout << static_cast<char> (97) << endl;  //"C++ - style cast -> better/"safer"


	//const int DOZEN = 12; //OFTEN named with all CAPS! 
	//const float PI = 3.14; //CONSTANT variable 
	////PI = 3.141; 


	//int quotient = 1 / 2;
	////float quotient = 1.0 / 2.0;


	//int likeCount; // UNINITIALIZED!
	//cout << likeCount << endl; // verify


	//likeCount = likeCount + 10; // add 10 likes
	//likeCount + 10 = likeCount; 

	//cout << likeCount << endl; // will print the value 10


	//char grade = 'B';
	//cout << grade << endl; 

	//more than one character – compiles, but only stores ‘+’
	//int age = 31; //we mean "years" )

	cout << "What is your name ? " << endl;
	string username;
	cin >> username; //input does NOT require quotes
	cout << "Hello, " << username;

	return 0;
}
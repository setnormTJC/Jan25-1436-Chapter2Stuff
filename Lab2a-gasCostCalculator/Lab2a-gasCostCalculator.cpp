

#include <iostream>

//using namespace std; 


int main()
{

	double cost_per_gallon = 2.77; 
	std::cout <<"Size of (cost per gallon) is: " <<  sizeof(cost_per_gallon) << std::endl;
	auto fuelEfficiency = 20; //miles per gallon ("freedom units") 

	int capacity = 15; //unit is gallons (not liters/litres)

	std::cout << "You can go this many miles on a tank: " << fuelEfficiency * capacity 
		<< std::endl; 


	//insert range (total miles) calculation 
}


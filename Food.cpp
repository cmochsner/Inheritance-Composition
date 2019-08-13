#include <iostream>
#include "Food.h"

using namespace std;

//define Food class functions and constructors

//default construct sets variable values for class object decared with no () and parameters
Food::Food()
{
	volume = 0;
	calories = 0;
	vegetarian = true;
}
//allows user to pass and set certain variable values at declaration for class object
Food::Food(float volume, int calories, bool vegtarian)
{
	//this-> is used to differentiate between passed variables and variables of class object as they have the same name
	this->volume = volume;
	this->calories = calories;
	this->vegetarian = vegtarian;
}
//copies all values in Food object obj to Food object being declared
Food::Food(Food &obj)
{
	volume = obj.volume;
	calories = obj.calories;
	vegetarian = obj.vegetarian;
}
//allows user to set the volume for an object
void Food::setVolume(float vol)
{
	volume = vol;
}
//allows user to set the calories for an object
void Food::setCalories(int cals)
{
	calories = cals;
}
//allows user to set the vegetarian boolean value for an object
void Food::setVegetarian(bool veg)
{
	vegetarian = veg;
}
//allows user to access the volume of an object
float Food::getVolume()
{ 
	return volume; 
}
//allows user to access the # of calories of an object
int Food::getCalories()
{ 
	return calories;
}
//allows user to access the boolean value for vegetarian of an object
bool Food::getVegetarian()
{ 
	return vegetarian; 
}
//overloads the "==" operator to return true if two Food objects have all equal variable values, false if not
bool Food:: operator==(Food obj)
{
	if (volume == obj.volume&&calories == obj.calories&&vegetarian == obj.vegetarian)
	{
		return true;
	}
	return false;
}
//prints the information for a Food object
void Food::printItem()
{
	cout << "I am ";

	if (!vegetarian)
	{
		cout << "not ";
	}

	cout << "a vegetarian Food, my volume is " << volume << " fl. Oz and I have " << calories << " calories" << endl;
}
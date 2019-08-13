#include <iostream>
#include "Candy.h"

using namespace std;

//define Candy functions and constructors

//default constructor sets variable values for Candy object decared with no () and parameters. 
//Also calls CandyWrapper constructor for candyWrap object and calls Food constructor (explicitly) to intialize inherited Food variables.
Candy::Candy(): Food(), candyWrap()
{
	sweetness = 0;
	color = "NA";
}
//copies all values in Candy object obj to Candy object being declared. 
//Also calls Food copy constructor for inherited variables and candyWrapper copy constructor for candyWrap object.
Candy::Candy(Candy &obj): Food(obj), candyWrap(obj.candyWrap)
{
	sweetness = obj.sweetness;
	color = obj.color;
}
//sets sweetness level for Candy object
void Candy::setSweetness(float sweet)
{ 
	sweetness = sweet; 
}
//sets candyWrap object variable values to values of passed CandyWrapper object
//must use public mutatator (set) and accessor (get) functions to set values of candyWrap to variables of passed CandyWrapper object as the variables are private
void Candy::setCandyWrap(CandyWrapper wrap)
{
	candyWrap.setColor(wrap.getColor());
	candyWrap.setLength(wrap.getLength());
	candyWrap.setWidth(wrap.getWidth());
}
//sets color for Candy object
void Candy::setColor(string col)
{ 
	color = col; 
}
//returns sweetness level of Candy object
float Candy::getSweetness()
{
	return sweetness;
}
//returns candyWrap object of Candy object
CandyWrapper Candy::getCandyWrap()
{
	return candyWrap;
}
//returns color of Candy object
string Candy::getColor()
{
	return color;
}
//prints inherited Food variable values, then Candy variable values, then calls CandyWrapper print function to print variable values of candyWrap object
//vegetarian and calories are protected variables of Food class so they can be accessed directly, volume is private in Food class, so must be accessed throug public getVolume function
void Candy::printItem()
{
	cout << "I am ";

	if (!vegetarian)
	{
		cout << "not ";
	}
	
	cout << "a vegetarian Candy, my volume is " << getVolume() << " fl. Oz and I have " << calories << " calories, my sweetness level is " << sweetness;
	cout << ", my color is " << color << " and my wrapper has ";

	candyWrap.printItem();
}
//overloads the "==" operator to return true if two Candy objects have all equal variable values, false if not. 
//makes sure to check all variables values of inherited Food variables and CandyWrapper candyWrap object are equal.
//uses public accessor functions to get values for private variables
bool Candy::operator==(Candy obj)
{
	CandyWrapper temp(obj.candyWrap);

	if (calories==obj.calories && vegetarian==obj.vegetarian && getVolume()==obj.getVolume() && sweetness == obj.sweetness && color == obj.color && candyWrap.getColor()==temp.getColor() && candyWrap.getLength() == temp.getLength() && candyWrap.getWidth()==temp.getWidth())
	{
		return true;
	}

	return false;
}
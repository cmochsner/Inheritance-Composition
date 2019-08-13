#include <iostream>
#include "CandyWrapper.h"

using namespace std;

//define CandyWrapper functions and constructors

//default construct sets variable values for class object decared with no () and parameters
CandyWrapper::CandyWrapper()
{
	length = 0;
	width = 0;
	color = "NA";
}
//allows user to pass and set certain variable values at declaration for class object
CandyWrapper::CandyWrapper(float length, float width, string color)
{
	//this-> is used to differentiate between passed variables and variables of class object as they have the same name
	this->length = length;
	this->width = width;
	this->color = color;
}
//copies all values in CandyWrapper object obj to CandyWrapper object being declared
CandyWrapper::CandyWrapper(CandyWrapper &obj)
{
	length = obj.length;
	width = obj.width;
	color = obj.color;
}
//sets length of CandyWrapper object
void CandyWrapper::setLength(float leng)
{ 
	length = leng; 
}
//sets width of CandyWrapper object
void CandyWrapper::setWidth(float wid)
{
	width = wid; 
}
//sets color of CandyWrapper object
void CandyWrapper::setColor(string col)
{ 
	color = col; 
}
//returns value of the length of CandyWrapper object
float CandyWrapper::getLength()
{ 
	return length; 
}
//returns value of the width of the CandyWrapper object
float CandyWrapper::getWidth()
{ 
	return width; 
}
//returns value of the color of the CandyWrapper object
string CandyWrapper::getColor()
{
	return color;
}
//prints values of CandyWrapper object
void CandyWrapper::printItem()
{
	cout << "a length of " << length << " in, a width of " << width << " in and a " << color << " color" << endl;
}
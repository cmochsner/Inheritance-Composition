#ifndef CANDYWRAPPER_H
#define CANDYWRAPPER_H

#include <string>

using namespace std;

//declare CandyWrapper variables and functions
class CandyWrapper 
{
	private: 
		float length;
		float width;
		string color;
	public:
		CandyWrapper();
		CandyWrapper(float length, float width, string color);
		CandyWrapper(CandyWrapper &obj);
		void setLength(float leng);
		void setWidth(float wid);
		void setColor(string col);
		float getLength();
		float getWidth();
		string getColor();
		void printItem();
};
#endif

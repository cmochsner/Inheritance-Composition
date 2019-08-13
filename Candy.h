#ifndef CANDY_H
#define CANDY_H
#include "Food.h"
#include "CandyWrapper.h"
#include <string>

using namespace std;

//declare Candy functions and variables. Candy inherits Food class and contains a CandyWrapper object (compositon)
class Candy: public Food
{
	private:
		float sweetness;
		CandyWrapper candyWrap;
	protected:
		string color;
	public:
		Candy();
		Candy(Candy &obj);
		void setSweetness(float sweet);
		void setCandyWrap(CandyWrapper wrap);
		void setColor(string col);
		string getColor();
		float getSweetness();
		CandyWrapper getCandyWrap();
		void printItem();
		bool operator==(Candy obj);
};
#endif

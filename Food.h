#ifndef FOOD_H
#define FOOD_H

//declare functions and variables for Food class
//Note: function cannot be defined in .h file
class Food
{
	private:
		float volume;
	protected:
		int calories;
		bool vegetarian;
	public:
		Food();
		Food(float volume, int calories, bool vegtarian);
		Food(Food &obj);
		void setVolume(float volume);
		void setCalories(int calories);
		void setVegetarian(bool veg);
		float getVolume();
		int getCalories();
		bool getVegetarian();
		bool operator==(Food obj);
		void printItem();
};
#endif

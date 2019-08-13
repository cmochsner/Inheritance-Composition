#include <iostream>
#include <string>

#include "Food.h"
#include "Candy.h"
#include "CandyWrapper.h"

using namespace std;

int main()
{
	//main function for testing Food, CandyWrapper, and Candy classes
	Food fd1 (1, 200, true); 
	Food fd2 (fd1);
	Candy cd1;
	
	CandyWrapper cw1 (1, 0.5, "red"); 
	//CandyWrapper cw2 (0.5, 0.25, "blue");
	cd1.setVolume(0.05); 
	cd1.setCalories(200); 
	cd1.setVegetarian(false); 
	cd1.setSweetness(0.7); 
	cd1.setColor("pink"); 
	cd1.setCandyWrap(cw1);
	Candy cd2(cd1);
	//cd2.setVolume(6);
	if (cd1 == cd2)
	{
		cout << "yep!" << endl;
	}
	else
	{
		cout << "nope" << endl;
	}
	cd2.printItem();
	/*cd2 = cd1; 
	cd2.setCandyWrap(cw2);
	if (fd1 == fd2) cout << "we are similar !!" << endl << endl; 
	else cout << "we are different !!" << endl << endl; 
	fd1.printItem(); cout << endl; 
	fd2.printItem(); cout << endl;

	if (cd1 == cd2) cout << "we are similar !!" << endl << endl; 
	else cout << "we are different !!" << endl << endl; 
	cd1.printItem(); cout << endl; 
	cd2.printItem(); cout << endl;*/
	
	system("pause");
	return 0;
}
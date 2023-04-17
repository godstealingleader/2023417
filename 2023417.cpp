#include <iostream>
#include <string>


struct CandyBar
{
	std::string brond;
	double weight;
	int calorie;
};


int main()
{
	using std::cout; using std::endl;
	CandyBar snack{ "Mocha Munch",2.3,350 };
	cout << "The snack belongs to " << snack.brond << ", have " << snack.weight << "g." << endl;
	cout << "If you eat it ,you will get " << snack.calorie << " calorie.";
	return 0;
}
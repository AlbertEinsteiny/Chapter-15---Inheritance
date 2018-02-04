#include "pch.h"


#include <iostream> 
#include <ostream> 

using namespace std;
using std::cout;
using std::endl;



int main()
{
	cars car;
	trucks truck;

	int sum1 = car.buy(car.nissan, car.honda);
	cout << sum1 << endl;

	int sum2 = truck.buy(truck.GMC, truck.dodge, truck.chevy);
	cout << sum2 << endl;

	int sum3 = truck.buy(truck.nissan, truck.toyota, truck.lambo);
	cout << sum3 << endl;

	return 0;
};
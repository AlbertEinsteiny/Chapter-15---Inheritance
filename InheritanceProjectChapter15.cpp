// InheritanceProjectChapter15.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream> 
#include <ostream> 
#include <vector>
#include <string>
#include <sstream>
#include <fstream>
#include <list>
#include <deque>
#include <array>
#include <algorithm>
#include <numeric>
#include <iterator>
#include <functional>
#include <utility>

using namespace std;
using namespace placeholders;
using std::cin;
using std::cout;
using std::endl;
using std::begin;
using std::end;
using std::vector;
using std::deque;
using std::string;


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


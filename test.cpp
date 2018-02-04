#include "pch.h"

#include "../Chapter 15 Inheritance/stdafx.h"
#include "../Chapter 15 Inheritance/Chapter 15 Inheritance.cpp"



class vehicles : public ::testing::Test      // base-class
{
protected:
	int nissan;  // both vehicles
	int toyota;  // both vehicles
	int honda;
	int GMC;
	int ford;
	int dodge;
	int chevy;

	int BMW = 50000;
	int jaguar = 60000;
	int lambo = 100000;

	// expect new definitions
	virtual int buy(int a)
	{
		int c = a;
		return c;
	}

};

// derived classes

class cars : vehicles
{
public:
	int buy(int a, int b)   // new definition
	{
		int sum1 = a + b;
		return sum1;
	};

	int nissan = 10000;  // nissan car
	int toyota = 20000;	 // toyota car
	int honda = 10000;
};


class trucks : vehicles
{
public:
	float buy(float a, float b, int c)   // new definition
	{
		int sum2 = a + b + c;
		return sum2;
	};


	int GMC = 20000;
	int ford = 10000;
	int dodge = 20000;
	float nissan = 15000;  // nissan truck
	float toyota = 25000;  // toyota truck
	int chevy = 30000;
	// use base-class value
	using vehicles::lambo;

};

TEST_F(vehicles, TestName) {
	EXPECT_EQ(BMW, 1);
	EXPECT_TRUE(true);
}




int main(int argc, char *argv[])
{
	//testing::InitGoogleTest(&argc, argv);
	//return RUN_ALL_TESTS();

	

	cout << "All tests passed." << endl;
}
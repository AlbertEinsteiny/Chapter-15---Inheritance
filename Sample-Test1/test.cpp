#include "pch.h"

#include "../Chapter 15 Inheritance/stdafx.h"
#include "../Chapter 15 Inheritance/Chapter 15 Inheritance.cpp"

using namespace std;


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

class cars : public vehicles
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

class trucks : public vehicles
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



TEST_F(vehicles, TestName) 
{
	EXPECT_EQ(BMW, 50000);
	EXPECT_TRUE(true);

	EXPECT_EQ(jaguar, 60000);
	EXPECT_TRUE(true);

	EXPECT_EQ(lambo, 100000);
	EXPECT_TRUE(true);

	EXPECT_EQ(50000, buy(BMW));
	EXPECT_EQ(60000, buy(jaguar));
	EXPECT_EQ(100000, buy(lambo));
}

TEST_F(cars, TestName)
{
	// make sure price is from derived class
	EXPECT_EQ(nissan, 10000);
	EXPECT_EQ(toyota, 20000);
	EXPECT_EQ(honda, 10000);

	//make sure function is from derived class
	EXPECT_EQ(30000, buy(nissan, toyota));
	EXPECT_EQ(20000, buy(nissan, honda));
	EXPECT_EQ(30000, buy(honda, toyota));
}

TEST_F(trucks, TestName)
{
	// make sure price is from derived class
	EXPECT_EQ(GMC, 20000);
	EXPECT_EQ(ford, 10000);
	EXPECT_EQ(dodge, 20000);
	EXPECT_EQ(nissan, 15000);
	EXPECT_EQ(toyota, 25000);
	EXPECT_EQ(chevy, 30000);
	EXPECT_EQ(lambo, 100000);

	EXPECT_EQ(145000, buy(GMC, toyota, lambo));
	EXPECT_EQ(70000, buy(nissan, toyota, chevy));
	EXPECT_EQ(140000, buy(nissan, toyota, lambo));

}

int main(int argc, char *argv[])
{
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
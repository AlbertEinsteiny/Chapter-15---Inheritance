// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>

// TODO: reference additional headers your program requires here




class vehicles      // base-class
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

	
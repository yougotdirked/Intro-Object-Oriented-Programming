// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>
#include <iostream>
#include <string>

using namespace std;

class Transport
{
public:
	int maxPassengers;
	int ticketPrice;
	Transport(int maxP, int price);

	virtual void printProfit() = 0;
};
class Train : public Transport
{
public:
	Train(int maxP, int price);
};
class HighSpeedTrain : public Train
{
public:
	HighSpeedTrain(int maxP, int price, int t);
	void printProfit();
private:
	int toeslag;
};

class NormalTrain : public Train
{
public: 
	NormalTrain(int maxP, int price);
	virtual void printProfit() = 0;
};

class FastRide : public NormalTrain
{
public:
	FastRide(int maxP, int price);
	void printProfit();
};

class SlowRide : public NormalTrain
{
public:
	SlowRide(int maxP, int price);
	void printProfit();
};


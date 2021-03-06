// INOOP7.cpp : Defines the entry point for the console application.
//

//I'm sorry I was too lazy to make multiple header and cpp files...

#include "FastRide.h"
#include "SlowRide.h"
#include "HighSpeedTrain.h"

Transport::Transport(int maxP, int price)
{
	maxPassengers = maxP;
	ticketPrice = price;

}

Train::Train(int maxP, int price) : Transport(maxP, price)
{
	int result = maxPassengers * ticketPrice;
}

HighSpeedTrain::HighSpeedTrain(int maxP, int price, int t) : Train(maxP, price)
{
	toeslag = t;
}

void HighSpeedTrain::printProfit()
{
	int result = maxPassengers * ticketPrice;
	cout << "High Speed Train: " << result + toeslag << endl;
}

NormalTrain::NormalTrain(int maxP, int price) : Train(maxP, price)
{

}
FastRide::FastRide(int maxP, int price) : NormalTrain(maxP, price)
{

}

void FastRide::printProfit()
{
	int result = maxPassengers * ticketPrice;
	cout << "Normal train (fast): " << result << endl;
}

SlowRide::SlowRide(int maxP, int price) : NormalTrain(maxP, price)
{

}


void SlowRide::printProfit()
{
	int result = maxPassengers * ticketPrice;
	cout << "Normal Train (slow): " << result << endl;
}

int main()
{
	cout << "creating High Speed Train:" << endl;
	cout << "max passengers: 100, ticket price 10, toeslag 10" << endl << endl;
	HighSpeedTrain hst(100, 10, 10);

	cout << "creating Fast Train" << endl;
	cout << "max passengers: 1000, ticket price 8" << endl << endl;
	FastRide fr(1000, 8);

	cout << "creating Slow Train" << endl;
	cout << "max passengers: 1500, ticket price 6" << endl << endl;
	SlowRide sr(1500, 6);

	hst.printProfit();
	fr.printProfit();
	sr.printProfit();

	getchar();
}


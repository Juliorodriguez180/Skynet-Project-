// Skynet project.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <ctime>
using std::cout;
using std::endl;

int main()
{
	//generate random number on 8X8 grid.
	cout << "Generate Random enemy location on 8x8 grid... " << endl;
	srand(time(0)); //random number seeding 
					//randomizing the number between 1-64
					//random number sequence
	int searchGridHighNumber = 64;
	int searchGridLownumber = 1;
	int enemyLocation = rand() % searchGridHighNumber + searchGridLownumber;
	cout << "The enemy is located at # " << enemyLocation 
		<< " on 8X8 grid with 1-64 sectors." << endl;
	cout << "VTOL Warship Online....." << endl;
	int enemyLocationPredictionCounter = 0;
	//Is Target Found / Destroyed
	bool targetfound = false;

	while (targetfound == false)
	{
		// VTOL Warship selecting target location prediction in flyover hunt for enemy 
		int targetLocationPrediction = ((searchGridHighNumber - searchGridLownumber) / 2) + searchGridLownumber;
		enemyLocationPredictionCounter++; //enemyLocationPredictionCounter = targetLocationPredictionCounter +1;
										//Radar ping of dog location
		cout << "==============================================================" << endl;
		cout << "VTOL Warship sending out ping # " << enemyLocationPredictionCounter << endl;
		//Ping tells us 
		///If the target location is higher or lower or right on the enemy location
		//Is target location prediction higher than the enemy location

		if (targetLocationPrediction > enemyLocation)
		{
			//The target location prediction was higher than the enemyLocation
			//no need to search anymore at or above target location prediction
			searchGridHighNumber = targetLocationPrediction - 1;
			//subtract one dont need to search same number
			cout << "The target location prediction of " << targetLocationPrediction << " was higher than the actual" << enemyLocation << endl;
			cout << "The new searchGirdNumber = " << searchGridHighNumber << endl;
		}
		else if (targetLocationPrediction < enemyLocation)
		{
			//the VTOL Warship prediction was lower then enemy location
			//does not need to serach at or below cell number
			searchGridLownumber = enemyLocationPredictionCounter++;
			//add one because we dont need to search same number 
			cout << "The VTOL Warship cell prediciton of " << targetLocationPrediction << " was lower than the actual enemy location " << enemyLocation << endl;
			cout << "The new searchGridLownumber = " << searchGridLownumber << endl;
		}
		else if (targetLocationPrediction == enemyLocation)
		{
			//Enemy was found!!!
			cout << "Enemy was hiding at location # " << enemyLocation << endl;
			cout << "Enemy was found at location # " << targetLocationPrediction << endl;
			cout << "VTOL Warship took " << enemyLocationPredictionCounter << " predicitons to find the enemy location on grid of 8x8 (64)" << endl;
			targetfound = true;
		}
		else
		{
			//VTOL Warship from running 
			cout << "VTOL Airship running low on fuel!!!!" << endl;
			cout << "Returning to Base for Refuel!!!" << endl;
			targetfound = true;
		}
	}
	//pause then exit ....
	system("pause");
	return 0;
}
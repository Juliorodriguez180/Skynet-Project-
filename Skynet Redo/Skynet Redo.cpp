// SkyNet.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
//This is needed for random number seeding 
#include <ctime>
using std::cout;
using std::endl;

int main()
{
	//Generate Random enemy location on 8x8 Grid
	<< cout "Generate Random enemy location on 8x8 grid..." << endl;
	//Required a really randomized number by help of seeding using ctime.
	//This zero could be replaced by nullpty
	srand(time(0));
	//Randomizing the number between 1-64,
	//note this will have the same pattern without srand tp see the 
	//random number squence 
	int searchGridHighNumber = 64;
	in searchGridLowNumber = 1;
	int enemyLocation = srand() % searchGridHighNumber + searchGridLowNumber;
	cout << "The enemy is located at #" << enemyLocation
		<< "on 8x8 grid with 1-64 sectors." << endl;

	cout << "VTOL Airship coming online..." << endl;
	//Number of location prediction it took to find enemy 
	int targetLocationPredictionCounter = 0;
	//Is Target Found /Destroyed
	bool(targetFound = false)
	{
		//Software selecting target location prediction in flyover hunt for enemy 
		int targetLocationPrediction = ((searchGridHighNumber - searchGridLowNumber) / 2) + searchGridLowNumber;
		targetLocationPredictionCounter++; //targetLocationPredictionCounter = targetLocationPredictionCounter +1;
										   //Rader Ping of enemy location
		cout << "===================================================================================" << endl;
		cout << "VTOL Airship sending out ping #" << targetLocationPredictionCounter << endl;
		//In this simulation the ping tells us 
		//If the target location is higher or lower or right on the enemy location
		//Is target location prediction higher than the enemy location
		//
	}
		if (targetLocationPredictionCounter > enemyLocation)
		{
			//The target location prediction was higher than the enemyLocation
			//no need to search anymore at or above target location prediction
			//reset the searchGridHighNumber of the search Grid.
			//We  subtract 1 because we don't need to search the number guessed.
			searchGridHighNumber = targetLocationPrediction - 1;
			cout << "The target location prediction of" << targetLocationPrediction << "was higher than the actual"
				cout << "The new searchGridHighNumber" << searchGridHighNumber << endl;
		}
		else if (targetLocationPrediction < enemyLocation)
		{
			//The target location prediction was lower than the enemyLocation
			//no need to search anymore at or below the target location prediction
			//reset the searchGridLowNumber of the search Grid.
			//We add 1 because we don't need to search the number guessed.
			searchGridLowNumber = targerLocationPrediction + 1;
			cout << "The target location prediction of" << targetLocationPrediction << "was lower than actual"
				cout << "The new searchGridLowNumber =" << searchGridLowNumber << endl;
		}
		else if (targetLocationPrediction == enemyLocation)
		{
			//Simulate won!
			cout << "Enemy was hidng at location #" << enemyLocation << endl;
			cout << "Target was found at location #" << targerLocationPrediction << endl;
			cout << "VTOL Warship took " << targetLocationPredictionCounter << predictions to find
				targetFound = true;
		}
		//reset the searchGirdHighNumber of the search Grid.
		//We subtract 1 because we don't need to search the number guessed
		searchGridHighNumber = targetLocationPrediction - 1;
		cout << "The Target location prediction of" << targetLocationPrediction << "was higer then the actual"
			cout << "The new searchGridHighNumber =" << searchGridHighNumber << endl;
	}
	else if (targetLocationPrediction < enemyLocation)
	{
		//The target Location Prediction was Lower than the enemyLocation
		//no need to search anymore at or bellow the target prediction 
		//reset the searchGridLowNumber of the search Grid.
		//We add 1 because we don't need to search the number guessed.
		searchGridLowNumber = targetLocationPrediction + 1;
		cout << "The target location prediction of" << targetLocationPrediction << "was lower than actual"
			cout << "The new searchGridLowNumber =" << searchGridLowNumber << endl;
	}
	else if (targetLocationPrediction == enemylocation)
	{
		//Simulate won!
		cout << "Enemy was hiding at location #" << enemyLocation << endl;
		cout << "Target was found at location #" << targetLocationPrediction << endl;
		cout << "VTOL Warship took" << targetLocationPredictionCounter <<
			targerFound = true;
	}
	else
	{
		//Somethings has gone wrong, this keeps the simulation from running forever 
		//if there is a case I forgot!
		cout << "VTOL Warship run ending" << endl;
		cout << "VTOL Warship leaving area" << endl;
		targetFound = true;
	}
}
//Pause then exit simulation....
system("pause");
return 0;
}


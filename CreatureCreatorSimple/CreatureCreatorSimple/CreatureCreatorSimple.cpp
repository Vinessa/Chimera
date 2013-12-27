// CreatureCreatorSimple.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Creature.h"
#include "Definitions.h"


int _tmain(int argc, _TCHAR* argv[])
{
	Creature WildHorse(Horse, Horse, Horse, Hooves, Hooves, Horsehair, Molars);
	Creature WildBird(Bird, Bird, Bird, Wings, Talons, Feathers, ABeak);

	WildHorse.PrintCreature();
	WildBird.PrintCreature();

	/*WildHorse.CreateNewCreature(WildBird);*/
	Creature NewBaby = WildHorse.CreateNewCreature(WildBird);
	NewBaby.PrintCreature();

	Creature NewBaby2 = WildBird.CreateNewCreature(WildHorse);
	NewBaby2.PrintCreature();

	int Temp;
	cin >> Temp;

	return 0;
}


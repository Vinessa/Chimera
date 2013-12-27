#pragma once
#ifndef _CREATURE_H
#define _CREATURE_H

#include <iostream>
using namespace std;

class Creature
{
public:
	Creature(void);
	Creature(string a_Name, string a_Head, string a_Body, string a_Arms, string a_Legs, string a_Tail, string a_Teeth);
	~Creature(void);

	string CreateNewName(Creature OtherCreature);
	Creature CreateNewCreature(Creature OtherCreature);
	void PrintCreature();
	

	string m_Name;
	string m_Head;
	string m_Body;
	string m_Arms;
	string m_Legs;
	string m_Tail;
	string m_Teeth;
};

#endif /* _CREATURE_H */


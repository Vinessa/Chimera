#include "StdAfx.h"
#include "Creature.h"

#include <iostream>
#include <string>
using namespace std;




Creature::Creature(void)
{
}

Creature::Creature(string a_Name, string a_Head, string a_Body, string a_Arms, string a_Legs, string a_Tail, string a_Teeth)
{
	m_Name = a_Name;
	m_Head = a_Head;
	m_Body = a_Body;
	m_Arms = a_Arms;
	m_Legs = a_Legs;
	m_Tail = a_Tail;
	m_Teeth = a_Teeth;
}

Creature::~Creature(void)
{
}

string Creature::CreateNewName(Creature OtherCreature)
{ 
	string TempName = m_Name + OtherCreature.m_Name;
	
	return TempName;
}

Creature Creature:: CreateNewCreature(Creature OtherCreature)
{
	string NewName = CreateNewName(OtherCreature);
	//string Testname = "New Creature!"; // for testing purposes only.
	Creature NewCreature(NewName, m_Head, OtherCreature.m_Body, m_Arms, OtherCreature.m_Legs, m_Tail, OtherCreature.m_Teeth);
	return NewCreature;
}

void Creature::PrintCreature()
{
	cout <<"This Creature is a "<< m_Name <<". \n\n";
	cout << "It has a "<< m_Head <<" head. \n";
	cout << "It has a "<< m_Body <<" body. \n";
	cout << "It has "<< m_Arms <<" as it's front appendages. \n";
	cout << "It has "<< m_Legs <<" as its back appendages. \n";
	cout << "It has a "<< m_Tail <<" for a tail.\n";
	cout << "It has "<< m_Teeth <<" for teeth. \n\n";
		       
}
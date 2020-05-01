#pragma once
#include <list>
#include "Meal.h"

using namespace std;
ref class Source
{
public:
	static list<Meal*> *AllMeals = new list<Meal*>();
	static void addElement(Meal* meal);
	static void deleteElement(int index);
	static void changeName(int index, string name);
	static void changeCost(int index, string cost);
};


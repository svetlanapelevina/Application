#pragma once
#include <list>
#include "Meal.h"


using namespace std;
ref class Source
{
public:
	static list<Meal*> *AllMeals = new list<Meal*>();
	static void addElement(Meal* meal);
};


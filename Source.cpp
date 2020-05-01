#include "Source.h"

void Source::addElement(Meal* meal)
{
	AllMeals->push_back(meal);
}

void Source::deleteElement(int index)
{
	for (int i = index; i < AllMeals->size()-1; i++)
	{
		AllMeals[i] = AllMeals[i + 1];
	}
	AllMeals->pop_back();
}

void  Source::changeName(int index, string name)
{
	int i = 0;
	for (Meal* meal : *AllMeals)
	{
		if (i++ == index) meal->setName(name);
	}
}

void  Source::changeCost(int index, string cost)
{
	int i = 0;
	for (Meal* meal : *AllMeals)
	{
		if (i++ == index) meal->setCost(atoi(cost.c_str()));
	}
}
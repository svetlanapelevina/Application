#pragma once
#include "Meal.h"
class Dessert : public Meal
{
protected:
	string type;
public:
	Dessert(string name1, int cost1, string type1);
	void Dessert::setType(string type1);
	string Dessert::getType();
	string toString();
};


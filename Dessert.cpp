#include "Dessert.h"

Dessert::Dessert(string name1, int cost1,string type1) : Meal(name1, cost1)
{
	this->number = 3;
	type = type1;
}

void Dessert::setType(string type1) { type = type1; }

string Dessert::getType() { return type; }

string Dessert::toString()
{
	return "," + Meal::toString() + "," + this->getType();
}

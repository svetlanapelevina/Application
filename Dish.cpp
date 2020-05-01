#include "Dish.h"

Dish::Dish(string name1, int cost1, string components1) : Meal(name1, cost1)
{
	this->number = 1;
	components = components1;
}

void Dish::setComponents(string components1) { components = components1; }

string Dish::getComponents() { return components; }

string Dish::toString()
{
	return "," + Meal::toString() + "," + this->getComponents();
}
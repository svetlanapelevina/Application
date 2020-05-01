#include "Meal.h"
#include <iostream>
#include <sstream>

Meal::Meal()
{

}

Meal::Meal(string name1, int cost1)
	{
		name = name1;
		cost = cost1;
	}

void Meal::setName(string name1) { name = name1; }

string Meal::getName() { return name; }

void Meal::setCost(int cost1) { cost = cost1; }

int Meal::getCost() { return cost; }

int Meal::getNumber() { return number; }

string Meal::toString()
{
	ostringstream ss;
	ss << this->getNumber();
	ss << "," + this->getName() + ",";
	ss << this->getCost();;
	return ss.str();
}

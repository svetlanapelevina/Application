#include "Drink.h"

Drink::Drink(string name1, int cost1, string volume1) : Meal(name1, cost1)
{
	this->number = 2;
	volume = volume1;
}

void Drink::setVolume(string volume1) { volume = volume1; }

string Drink::getVolume() { return volume; }

string Drink::toString()
{
	return " " + Meal::toString() + " " + this->getVolume() + " ";
}

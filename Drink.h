#pragma once
#include "Meal.h"

class Drink : public Meal
{
private:
	string volume;
public:
	Drink(string name1, int cost1, string volume1);
	void setVolume(string volume1);
	string getVolume();
	string toString();
};


#pragma once
#include "Meal.h"
#include <string>

using namespace std;
class Dish :
	public Meal
{
protected:
	string components;
public:
	Dish(string name1, int cost1, string components1);
	void setComponents(string components1);
	string getComponents();
	string toString();
};




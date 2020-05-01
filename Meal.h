#pragma once
#include <string>
using namespace std;

class Meal
{
protected:
	int number;
	string name;
	int cost;
public:
	Meal();
	Meal(string name1, int cost1);
	int getNumber();
	void setName(string name1);
	string getName();
	void setCost(int cost1);
	int getCost();
	virtual string toString();
};

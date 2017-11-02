#pragma once
#include <iostream>
#include "Score.h"
#include <string>	
using namespace std;

class Player {
public:
	string getName() const;
	int getScoreAmount() const;
	void readInName();
	int readInNumberOfGoes() const;
	void updateScore(int);
private:
	string name_;
	Score score_;
};
/*
 * ArcticAnimal.hpp
 *
 *  Created on: Feb 25, 2023
 *      Author: ericx
 */

#ifndef ARCTICANIMAL_HPP_
#define ARCTICANIMAL_HPP_

#include <vector>
#include <string>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <sstream>

using namespace std;

class ArcticAnimal {
public:
	ArcticAnimal();
	virtual ~ArcticAnimal();

	string 	getSpeciesName() const;			//Getter
	bool 	setSpeciesName(string);			//Setter

	int 	getAverageWeight() const;		//Getter
	bool 	setAverageWeight(int);			//Setter

	int 	getAverageLength() const; 		//Getter
	bool 	setAverageLength(int);			//Setter

	int 	getPopulation() const;			//Getter
	bool 	setPopulation(int);				//Setter

	bool 	getEndangered() const;			//Getter
	bool 	setEndangered(bool);			//Setter

	string 	getFoodSource() const;			//Getter
	bool 	setFoodSource(string);			//Setter

private:
	string  speciesName;
	int 	avgWeight;
	int 	avgLength;
	int 	pop;
	bool 	endangered;
	string  foodSrc;
};

void menu();							//Function Prototype for function displaying the menu
void clear(vector<ArcticAnimal*>&);		//Function Prototype to clear the vector

#endif /* ARCTICANIMAL_HPP_ */

/*
 * ArcticAnimal.cpp
 *
 *  Created on: Feb 25, 2023
 *      Author: ericx
 */

#include "ArcticAnimal.hpp"

ArcticAnimal::ArcticAnimal() {
	// TODO Auto-generated constructor stub

}

ArcticAnimal::~ArcticAnimal() {
	// TODO Auto-generated destructor stub
}

string ArcticAnimal::getSpeciesName() const{
	return speciesName;
}
bool ArcticAnimal::setSpeciesName(string s){
	if(s == "")
		return 0;
	else{
		speciesName = s;
		return 1;
	}
}

int ArcticAnimal::getAverageWeight() const{
	return avgWeight;
}
bool ArcticAnimal::setAverageWeight(int i){
	if(i < 0)
		return 0;
	else{
		avgWeight = i;
		return 1;
	}
}

int ArcticAnimal::getAverageLength() const{
	return avgLength;
}
bool ArcticAnimal::setAverageLength(int i){
	if(i < 0)
		return 0;
	else{
		avgLength = i;
		return 1;
	}
}

int ArcticAnimal::getPopulation() const{
	return pop;
}
bool ArcticAnimal::setPopulation(int i){
	if(i < 0)
		return 0;
	else{
		pop = i;
		return 1;
	}
}

bool ArcticAnimal::getEndangered() const{
	return endangered;
}
bool ArcticAnimal::setEndangered(bool tf){
	if(!tf)
		return 0;
	else{
		endangered = tf;
		return 1;
	}
}

string ArcticAnimal::getFoodSource() const{
	return foodSrc;
}
bool ArcticAnimal::setFoodSource(string s){
	if(s == "")
		return 0;
	else{
		foodSrc = s;
		return 1;
	}
}

void menu(){
	cout << "Menu" 												<< endl;
	cout << "=================================================" << endl;
	cout << "1) Enter the name and read a CSV file" 			<< endl;
	cout << "2) Clear the Vector and all Animals from memory" 	<< endl;
	cout << "3) Print out the vector of animals"				<< endl;
	cout << "x) Exit the program" 								<< endl << endl;
}

void clear(vector<ArcticAnimal*>& AAPVector){
	for(unsigned int i = 0; i < AAPVector.size(); i++){
				delete AAPVector[i];		//delete allocated memory
				AAPVector[i] = nullptr;		//set unused to null

			}
			AAPVector.clear();				//reset the array
}

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

string ArcticAnimal::getSpeciesName(void) const{		//speciesName
	return this->speciesName;
}//getSpeciesName
bool ArcticAnimal::setSpeciesName(string s){
	if(s == "")
		return false;
	else{
		this->speciesName = s;
		return true;
	}
}//setSpeciesName

int ArcticAnimal::getAverageWeight(void) const{			//avgWeight
	return this->avgWeight;
}//getAverageWeight
bool ArcticAnimal::setAverageWeight(int i){
	if(i < 0)
		return false;
	else{
		this->avgWeight = i;
		return true;
	}
}//setAverageWeight

int ArcticAnimal::getAverageLength(void) const{			//avgLength
	return this->avgLength;
}//getAverageLength
bool ArcticAnimal::setAverageLength(int i){
	if(i < 0)
		return false;
	else{
		this->avgLength = i;
		return true;
	}
}//setAverageLength

int ArcticAnimal::getPopulation(void) const{			//population
	return this->pop;
}//getPopulation
bool ArcticAnimal::setPopulation(int i){
	if(i < 0)
		return false;
	else{
		this->pop = i;
		return true;
	}
}//setPopulation

bool ArcticAnimal::getEndangered(void) const{			//endangered
	return this->endangered;
}//getEndangered
bool ArcticAnimal::setEndangered(bool tf){
	if(!tf)
		return false;
	else{
		this->endangered = tf;
		return true;
	}
}//setEndangered

string ArcticAnimal::getFoodSource(void) const{			//foodSrc
	return this->foodSrc;
}//getFoodSource
bool ArcticAnimal::setFoodSource(string s){
	if(s == "")
		return false;
	else{
		this->foodSrc = s;
		return true;
	}
}//setFoodSource

void menu(){
	cout << "Menu" 												<< endl;
	cout << "=================================================" << endl;
	cout << "1) Enter the name and read a CSV file" 			<< endl;
	cout << "2) Clear the Vector and all Animals from memory" 	<< endl;
	cout << "3) Print out the vector of animals"				<< endl;
	cout << "x) Exit the program" 								<< endl << endl;
}//menu

void clear(vector<ArcticAnimal*>& AAPVector){
	for(unsigned int i = 0; i < AAPVector.size(); i++){
				delete AAPVector[i];		//delete allocated memory
				AAPVector[i] = nullptr;		//set unused to null

			}
			AAPVector.clear();				//reset the array
}//clear

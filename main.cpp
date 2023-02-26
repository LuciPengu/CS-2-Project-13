//============================================================================
// Name        : ArcticAnimalObjects.cpp
// Author      : Eric Xu
// Version     :
// Copyright   : My copyright notice so you dont use this program without permission
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "ArcticAnimal.hpp"

int main() {
	vector <ArcticAnimal*> 	AAPVector;
	ArcticAnimal* 			tmpAAptr;
	char 					choice;
	ifstream 				infile;
	string 					fName,
							inputRecord,
							tempString;

while(choice != 'x'){

	menu();
	cout << "Please enter a menu option: ";
	cin >> choice;
	cout << endl;
	switch(choice){
	case '1':  //Enter the name and read a CSV file

		cout << "Enter the CSV file you would like to read: ";
		cin >> fName;
		infile.open(fName);
		if(!infile){
			cout << endl << "Error: could not open file" << endl << endl;
			break;
		}
		cout << endl << "reading..." << endl << endl;

		while (!infile.eof()) {
			getline(infile, inputRecord);
			if(inputRecord.size() == 0){
				continue;
			}
			tmpAAptr = new ArcticAnimal;
			stringstream strStream(inputRecord);
			getline(strStream, tempString, ',');
			tmpAAptr->setSpeciesName(tempString);
			getline(strStream, tempString, ',');
			tmpAAptr->setAverageWeight(stoi(tempString));
			getline(strStream, tempString, ',');
			tmpAAptr->setAverageLength(stoi(tempString));
			getline(strStream, tempString, ',');
			tmpAAptr->setPopulation(stoi(tempString));
			getline(strStream, tempString, ',');
			tmpAAptr->setEndangered(stoi(tempString));
			getline(strStream, tempString, ',');
			tmpAAptr->setFoodSource(tempString);
			AAPVector.push_back(tmpAAptr); // Dynamic allocation
		  }
		  infile.close();

		 /*
		for(int n = 0;n<6;n++){
			tmpAAptr = new ArcticAnimal;
			tmpAAptr->setSpeciesName("Debug");
			tmpAAptr->setAverageWeight(101);
			tmpAAptr->setAverageLength(101);			// program to check for memory leaks
			tmpAAptr->setPopulation(101);
			tmpAAptr->setEndangered(1);
			tmpAAptr->setFoodSource("Debug");
			AAPVector.push_back(tmpAAptr); // Dynamic allocation
		}

		 */
		break;

	case '2':  //Clear the Vector and all Animals from memory
		cout << "clearing vector..." << endl << endl;
		clear(AAPVector);
		break;

	case '3':  //Print out the vector of animals
		cout << "Animal Report" << endl;
		cout << "~~~~~~~~~~~~~~" << endl;
		cout << setw(20) << left << "Species Name" << setw(20) << "Average Weight" << setw(20) << "Average Length" << setw(10) << "Population" << setw(16) << right << "Endangered" << setw(30) << "Food Source" << endl;
		cout << setw(20) << left << "~~~~~~~~~~~~" << setw(20) << "~~~~~~~~~~~~~~" << setw(20) << "~~~~~~~~~~~~~~" << setw(10) << "~~~~~~~~~~" << setw(16) << right << "~~~~~~~~~~" << setw(30) << "~~~~~~~~~~~~" << endl;

		for (unsigned int i = 0; i < AAPVector.size(); i++) {
			cout << setw(20) << left << AAPVector[i]->getSpeciesName() << setw(20) << AAPVector[i]->getAverageWeight() << setw(20) << AAPVector[i]->getAverageLength() << setw(10) << AAPVector[i]->getPopulation() << setw(15) << right << (AAPVector[i]->getEndangered() ? "Yes" : "No") << setw(30) << AAPVector[i]->getFoodSource() << endl;
		}
		cout << endl;
		break;

	case 'x':  //Exit the program
		clear(AAPVector);
		cout << "Program ending have a nice day" << endl; //returns the ending program statement
		return 0;
		break;

	default: cout << "Error: Please choose a number from 1-3 or x" << endl << endl;
	} // switch
} //while loop
} //main

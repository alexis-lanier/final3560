/**
*@file finalcode.cc
*@brief defines and calls functions countLine and countChar for cs3560 final
*@author Alexis Lanier
*/

#include <cstdlib>
#include <string>
#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int countLine(char *pName);
int countChar(char *pName);

/**
*@brief calls and executes functions countLine and countChar with param char pName
*@param none
*@return zero if successful
*/
int main(){
	char *pName;
	int chars = 0;
	int lines = 0;
	/*string filename;
	ifstream fin;
	ofstream fout;
	int lines = 0, chars = 0;
	cout <<"Please enter program name: ";
	while(cin.peek()=='\n')cin.ignore();
		getline(cin, filename);
	fin.open(filename.c_str());
	fin >> pName[0];
	int i = 1;
	while(!fin.fail()){ 
		fin >> pName[i];
		i++;
	}*/
	cout << "Enter any string: ";
	cin >> pName;
	if(pName == ""){
		lines = countLine(pName = "Ohio University");
		chars = countChar(pName = "Athens");
	}else{
		lines = countLine(pName);
		chars = countChar(pName);
	}

	cout << "The file has " << lines << "lines." << endl;
	cout << "The file has " << chars << "characters." << endl;
	
	return 0;
}		
	
/**
*@brief counts and prints out the number of lines in input
*@param character pName
*@return int number of lines
*/
int countLine(char* pName){
	int num_of_lines = 0;
	if(pName == "\n")
		num_of_lines++;

	return num_of_lines;

}

/**
*@brief counts and prints out number of characters in input
*@param character pName
*@return int number of characters
*/
int countChar(char *pName){
	int num_of_chars = 0;

	if(pName == " ")
		num_of_chars++;

	return num_of_chars;	

}




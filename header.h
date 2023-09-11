#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;
/*
first part
 1) A function to check if a certain integer exists in the array if the number is present return the index where the number is present.
 2) A function that can modify the value of an integer when called with the index of the integer in the array and return the new value and old value back to the user.
 3) A function that adds a new integer to the end of the array
 4) A function which intakes an index of an array and replaces the value with either 0 or removes the integer altogether.

second part 
(Add a try and catch blocks (refer to the slide 53 of chapter 2) to the user inputs for the
following functions from question 1:
▪ A function that can modify the value of an integer when called with the index of the integer in the array and return the new value and old value back to the user.
▪ A function that adds a new integer to the end of the array



*/

// function1 
void finder(int arr[], int& size, int eNum);

// function2
void modValue(int arr[], int& size,int index, int newValue);

// function3
void add(int arr[], int& size, int num);

// function4
void replaceORremove(int arr[], int& size, int rNum, string rORr);

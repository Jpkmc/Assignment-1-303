#include "header.h"
//function 1 
void finder(int arr[], int& size, int eNum) {
	//checking if the number exist in the array 
	for (int i = 0; i < size; i++) {
		//if it is return the index of the number 
		if (arr[i] == eNum) {
			cout << "The number was found and it was index: " << i << endl;
			return;
		}
	}
	// else tell the user the number doesn't exist in the array 
	cout << "The number enter couldn't be found in the array." << endl << endl;
}

//function 2
void modValue(int arr[], int& size, int index, int newValue){
  if(index < 0 || index >= size){
    throw out_of_range("Index given is not in size of the array");
  }
  //setting oldvalue to the old value from the array 
  int oldValue = arr[index];
  //setting the new value to the value chosen by the user 
  arr[index] = newValue;
  //statement showing what had been changed
  cout << "The index chosen was: " << index << " and the old value was: " << oldValue << " and it was change with " << newValue << endl;
}



//function 3
void add(int arr[], int& size, int num) {
	//creating the index limit 
	int x = 150;
  /*
  //checking if the number given exist in the array.
  	for (int i = 0; i < size; i++) {
  		if (arr[i] == num) {
  			cout << "This number exist" << endl;
  			return;
  		}
  	}
  */
	
	//if the size of the array is less than the limit then add it
	if (size < x) {
		arr[size++] = num;
	}
	//else throw an overflow error
	else {
		throw overflow_error("The array has reached its limit");
	}
}


//function 4
void replaceORremove(int arr[], int& size, int rNum, string rORr) {
	//checking the replace/remove is in the range of the size of the array
	if (rNum < 0 || rNum >= size) {
		throw out_of_range("Index given is not in size of the array");
	}
	if (rORr == "remove") {
		for (int i = rNum; i < size - 1; i++) {
			arr[i] = arr[i + 1];
		}
		size--;
	}
	else {
		arr[rNum] = 0; 
	}

}

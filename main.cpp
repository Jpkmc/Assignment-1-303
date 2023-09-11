#include "header.h"

int main() {
    //SETTING THE FILE TO A VARIABLE
    ifstream data("data.txt");
    //CREATING THE ARRAY AND SETTING THE SIZE TO 100
    int arr[150];
    //creating variables 
    int size = 0, num, eNum = 0, rNum = 0, newValue = 0, index = 0, user = 0;
    string rORr;
    bool tORf = true;

    while (data >> num) {
        arr[size++] = num;
    }

    data.close();

    /*
    * USED TO TEST IF THE NUMBER ARE IN GOING INTO THE ARRAY
    for (int i = 0; i < 100; i++) {
        cout << arr[i] << " ";
    }
    */
    while (tORf == true) {
        try {
            cout << "1. Find a number in the array."
                << endl << "2. Change a number in the array."
                << endl << "3. Add a number to the function."
                << endl << "4. Remove or Replace a  number in the array."
                << endl << "5. End program."
                << endl;
            cin >> user;
            if (user == 1) {
                //function 1
                cout << "What number would you like to find?" << endl;
                cin >> eNum;
                finder(arr, size, eNum);
                cout << endl;
            }
            else if (user == 2) {
                //function 2
                cout << "What index would you like to change?" << endl;
                cin >> index;
                cout << "What value would you like to change the chosen index?" << endl;
                cin >> newValue;
                modValue(arr, size, index, newValue);
                cout << endl;
            }
            else if (user == 3) {
                //function 3 
                cout << "What number to add to the array?" << endl;
                cin >> num;
                add(arr, size, num);
                cout << endl;
            }
            else if (user == 4) {
                //function 4 
                cout << "Would you like to remove a index or replace an index to 0?" << endl;
                cin >> rORr;
                cout << "What index are you changing?" << endl;
                cin >> rNum;
                replaceORremove(arr, size, rNum, rORr);
                cout << endl;
            }
          else if (user == 5){
            break;
          }
          else{
            cout << "Not an available option" << endl << endl;
          }
        }
        catch (const out_of_range& e) {
            cout << "Error: " << e.what() << endl;
          break;
        }
        catch (const overflow_error& e) {
            cout << "Error: " << e.what() << endl;
          break;
        }
        catch (...) {
            cout << "Error has occured." << endl;
          break;
        }
    }
  cout << endl << "The final array with all the changes looks like: " << endl;
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
}

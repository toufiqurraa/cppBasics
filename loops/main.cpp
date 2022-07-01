#include <iostream>
#include <vector>

using std:: cout;
using std:: cin;
using std:: endl;
using std:: vector;

int main() {
//    int grid[5][3];
//    
//    for (int row {0}; row < 5; ++row) {
//        for (int col {0}; col < 3; ++col) {
//            grid[row][col] = 1000;
//        }
//    }
//    
//    for(int row {0}; row < 5; ++row) {
//        for (int col {0}; col < 3; ++col {
//            cout << grid[row][col] << "";
//        }
//        
//        cout << endl;
//    }
    
    vector <int> numbers {5, 2, 3, 4, 5, 6, 7, 8, 9, -1, 9};
    char selection {};
    
    do {
    
        if(numbers.size() == 0) {
            cout << "The list is emmpty" << endl;
            break;
        } else {
            cout << "--------------" << endl;
            cout << "Menu" << endl;
            cout << "P: Print numbers" << endl;
            cout << "A: Add numbers" << endl;
            cout << "M: Display mean of the numbers" << endl;
            cout << "S: Display the smallest number" << endl;
            cout << "L: Display the largest number" << endl;
            cout << "Q: Quit" << endl;
            
            cout << "Enter your choice: " << endl;
            cin >> selection;
            
            if(selection == 'P' || selection == 'p') {

                for(int i = 0; i < numbers.size(); i++) {
                cout << "The numbers in the vector is:  " << numbers[i] << endl;
                }
            }
            
            else if(selection == 'A' || selection == 'a') {
                int sum = 0;
                
                for(int i = 0; i < numbers.size(); i++) {
                    sum += numbers[i];
                }
                
                cout << "The numbers in the vector is:  " << sum << endl;
            }
            
            else if(selection == 'M' || selection == 'm') {
                int sum = 0;
                
                for(int i = 0; i < numbers.size(); i++) {
                    sum += numbers[i];
                }
                
                cout << "The mean of the numbers: " << static_cast<double> (sum) / numbers.size() << endl;
            }
            
            else if(selection == 'S' || selection == 's') {
                int smallest = numbers.at(0);
                
                for(int i = 0; i < numbers.size(); i++) {
                    if(smallest > numbers[i]) {
                        smallest = numbers[i];
                    }
                }
                
                cout << "The smallest of the numbers: " << smallest << endl;
            }
            
            else if(selection == 'L' || selection == 'l') {
                int largest = numbers.at(0);
                
                for(int i = 0; i < numbers.size(); i++) {
                    if(numbers[i] > largest) {
                        largest = numbers[i];
                    }
                }
                
                cout << "The largest of the numbers: " << largest << endl;
            }
            
            else {
                cout << "Unknown selection, please try again." << endl;
            }
        }
    
    } while (selection != 'Q' && selection != 'q');
    
    return 0;
}
 

/*
 * This challenge is about using a collection of integer and 
 * allowing the user to select options from a menu to perform 
 * operations on the list.
 * 
 * P - Print numbers
 * A - Add number
 * M - Dispaly mean of the number
 * S - Display the smallest number
 * L - Display the largest number
 * Q - Quit
 * 
 * Enter your choice: 
 * 
 * The program should only accept valid choices from the user. 
 * Both uppercase and lowercase selections are valid.
 * If an illegal choice is made, you should dispaly, "Unknown selection, please try again".
 * And the menu option should be displayed again. 
*/
#include <iostream>

using namespace std;

int main() {
//    cout << "Enter there integers: " << endl;
//    
//    int total {};
//    int num1 {}, num2{}, num3{};
//    const int count {3};
//    
//    cin >> num1 >> num2 >> num3;
//    
//    total = num1 + num2 + num3;
//    
//    double average {0.0};
//    
//    // integer division
////    average = total / count;
//    
//    // double division
//    average = static_cast<double> (total) / count;
//    
//    cout << "The three numbers were: " << num1 << ", " << num2 << ", " << num3 << endl;
//
//    cout << "The sum of the numbers is: " << total << endl;
//    
//    cout << "The average of the numbers is: " << average << endl;

    int cents {};
    int dollars {100};
    int quarter {25};
    int dime {10};
    int nikel {5};
    int penny {1};
    
    cout << "Enter the ammout in cents: ";
    cin >> cents;
    
    int balance {};

    // req -> required     
    int dollars_req = cents / dollars;
    balance = cents - dollars_req * dollars;
    
    int quarter_req = balance / quarter;
    balance -= quarter_req * quarter;
    
    int dime_req = balance / dime;
    balance -= dime_req * dime;
    
    int nikel_req = balance / nikel;
    balance -= nikel_req * nikel;
    
    int penny_req =  balance / penny;
    
   
    cout << "The result is: " << endl;
    cout << "dollars: " << dollars_req << endl;
    cout << "quarter: " << quarter_req << endl;
    cout << "dimes: " << dime_req << endl;
    cout << "nikels: " << nikel_req << endl;
    cout << "pennies: " << penny_req << endl;
    
    return 0;
}


// Write a program that asks the user to enter the following: 
// An integer representing the number of cents

// The program then should display how to provide that change to the user

// In the US:
//      1 dollar is 100 cents
//      1 quarter is 25 cents
//      1 dime is 10 cents
//      1 nickel is 5 cents
//      1 penny is 1 cent

// A sample run: 

// Enter the ammout in cents: 92

// The change is as follows: 

// dollars: 0
// quarters: 3
// dimes: 1
// nickels: 1
// pennies: 2 

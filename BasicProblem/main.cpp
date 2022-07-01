#include <iostream>

using std:: cout;
using std:: cin;
using std:: endl;

int main() {
    int no_of_small_rooms {0};
    int no_of_large_rooms {0};
    
    cout << "Number of small rooms: ";
    cin >> no_of_small_rooms;
    
    cout << "Number of large rooms: ";
    cin >> no_of_large_rooms;
    
    cout << endl;
    
    cout << "Estimate for Carpet cleaning service:" << endl;
    
    const float price_per_small_room {25};
    const float price_per_large_room {35};
    float cost = no_of_small_rooms * price_per_small_room + no_of_large_rooms * price_per_large_room;
    cout << "Price per small room: $" << price_per_small_room << endl;
    cout << "Price per large room: $" << price_per_large_room << endl;
    cout << "Cost: " << cost << endl;
    
    const float tax_rate {6};
    float tax = cost * (tax_rate / 100.0);
    cout << "Tax: " << tax << endl;
    
    float total {cost + tax};
    cout << "Total estimate: " << total << endl;
    cout << "This estimate is valid for 30 days";
     
    
    return 0;
}

/**
 * Carpet cleaning service
 * Charges:
 *  $25 per small room
 *  $35 per large room
 * 
 * Sales tax rate is 6%
 * Estimates are valid for 30 days
 * 
 * Prompt the user for the number of rooms they would like cleaned and provided an estimate such as:
 * 
 * Estimate for Carpet cleaning service:
 * Number of small rooms: 3
 * Number of large rooms: 1
 * Price per small room: $25
 * Price per large room: $35
 * Cost: $110
 * Tax: $6.6
 * 
 * Total estimate: $116.6
 * This estimate is valid for 30 days 
 * **/
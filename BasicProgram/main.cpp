#include <iostream>
#include <climits>

using std:: cout;
using std:: cin;
using std:: endl;

int main() {
    int room_width {0};
    int room_length {0};
    
    cout << "Enter the width of the room: ";
    cin >> room_width;
    
    cout << "Enter the length of the room: ";
    cin >> room_length;
    
    cout << "The area of the room: " << room_width * room_length << endl;

//    cout << "char: " << sizeof(char) << " bytes" << endl;
//    cout << "int: " << sizeof(int) << " bytes" << endl;
//    cout << "unsinged int: " << sizeof(unsigned int) << " bytes" << endl;
//    cout << "short: " << sizeof(short) << " bytes" << endl;
//    cout << "long: " << sizeof(long) << " bytes" << endl;
//    cout << "long long: " << sizeof(long long) << " bytes" << endl;

//    cout << "float: " << sizeof(float) << " bytes" << endl;
//    cout << "double: " << sizeof(double) << " bytes" << endl;
//    cout << "long double: " << sizeof(long double) << " bytes" << endl;
//
//    cout << "Minimum char vlaue: " << CHAR_MIN << endl;
//    cout << "Maximum char vlaue: " << CHAR_MAX << endl;
//    
//    cout << "Minimum int vlaue: " << INT_MIN << endl;
//    cout << "Maximum int vlaue: " << INT_MAX << endl;
//    cout << "Minimum short vlaue: " << SHRT_MIN << endl;
//    cout << "Maximum short vlaue: " << SHRT_MAX << endl;
//    
    
    return 0;
}
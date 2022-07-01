#include <iostream>
#include <vector>

using namespace std;

int main() {
//    vector <char> vowels {'a', 'e', 'i', 'o', 'u'};
//    cout << vowels[0] << endl;
//    cout << vowels[1] << endl;
//    cout << vowels[2] << endl;
//    cout << vowels[3] << endl;
//    cout << vowels[4] << endl;
//    
//    cout << endl;
//    
//    vector <int> test_scores (3, 100); // 3 elements all initialized to 100
//    cout << test_scores.at(0) << endl;
//    cout << test_scores.at(1) << endl;
//    cout << test_scores.at(2) << endl;
//    cout << "There are " << test_scores.size() << " scores in the vector" << endl;
//    
//    cout << endl;
//    int score_to_add {0};
//    
//    cout << "Enter a test score to add to the vector: ";
//    cin >> score_to_add;
//    test_scores.push_back(score_to_add);
//    
//    cout << "Enter one more test score to add to the vector: ";
//    cin >> score_to_add;
//    test_scores.push_back(score_to_add);
//    cout << "There are " << test_scores.size() << " scores in the vector now" << endl;
//
//    cout << endl;
//    
//    // Example of a 2D-vector
//    vector <vector <int>> movie_ratings 
//    {
//        {1, 2, 3, 4}, 
//        {4, 2, 3, 1}, 
//        {5, 4, 3, 2} 
//    }; 
//    
//    cout << "Movie rating given by reviewer #2: " << endl;
//    cout << movie_ratings[1][0] << endl;
//    cout << movie_ratings[1][1] << endl;
//    cout << movie_ratings[1][2] << endl;
//    cout << movie_ratings[1][3] << endl;
//
//    cout << endl;
//    cout << "Movie rating given by reviewer #3: " << endl;
//    cout << movie_ratings.at(2).at(0) << endl;
//    cout << movie_ratings.at(2).at(1) << endl;
//    cout << movie_ratings.at(2).at(2) << endl;
//    cout << movie_ratings.at(2).at(3) << endl;
    
    vector <int> vector1;
    vector <int> vector2;
    
    vector1.push_back(10);
    vector1.push_back(20);
    
    cout << vector1.at(0) << endl;
    cout << vector1.at(1) << endl;
    
    vector2.push_back(100);
    vector2.push_back(200);

    cout << endl;

    cout << vector2.at(0) << endl;
    cout << vector2.at(1) << endl;    
    
    vector <vector <int>> vector_2d;
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);
    
    cout << endl;
    
    cout << vector_2d.at(0).at(0) << endl;
    cout << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << endl;
    cout << vector_2d.at(1).at(1) << endl;

    vector1.at(0) = 1000;
    
    cout << endl;
    
    cout << vector1.at(0) << endl;
    cout << vector1.at(1) << endl;
    
    cout << endl;
    cout << vector_2d.at(0).at(0) << endl;
    cout << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << endl;
    cout << vector_2d.at(1).at(1) << endl;

    return 0;
}

// Declare 2 empty vectors of integers named vector1 and vector2 respectively. 
// Add 10 and 20 to vector1 dynamically using push_back, display the elements in vector1 
// using the at() method as well as its size using the size() method

// Add 100 and 200 to vector2 dynamically using push_back, display the elements in vector2 
// using the at() method as well as its size using the size() method

// Declare an empty 2-D vector called vector_2d, it is a vector of vector<int>

// Add vector1 to vector_2d dynamically using push_back, add vector2 to vector_2d dynamically.

// Display the elements in vector_2d using the at() method. 

// change vector1.at(0) to 1000

// Display the elements in vector_2d again using the at() method. 

// Dispaly the elements in vector1

// What changes happened? 















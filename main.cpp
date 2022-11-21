//Kyle Younce
//The University of Arizona Global Campus
//INT499: Information Technology Capstone
// 11/10/2022

#include <iostream>
using namespace std;

struct EZTechMovie {
string name;
//Dynamic array of strings
string rating;
string *cast;
};

int main() {
  struct EZTechMovie movie;
  movie.cast = new string;
  string userinput;
  

//User prompts and inputs
  std::cout << "Would you like to store a movie? ";
  std::cin >> userinput;
  while (userinput == "Yes") {
    std::cout << "Title: ";
    getline(cin, movie.name);
    getline(cin, movie.name);
    std::cout << "Cast First & Last Name: ";
    //variable container for cast.movie
    getline(cin, movie.cast[0]);
    std::cout << "Movie Rating: ";
    getline(cin, movie.rating);
//Output to console
  std::cout << "****____________*****" << endl;
  std::cout << "Movie Entered" << endl;
  std::cout << "Movie: " << movie.name << endl;
  std::cout << "Cast: " << movie.cast << endl;
  std::cout << "Rating: " << movie.rating << endl;
//Additional prompt
  std::cout << "Would you like to store additional movies? ";
  std::cin >> userinput;
  
    }
}
// ------------- FILE HEADER -------------
// Author: Andy Joy
// Assignment: Midterm
// Date: 05/09/2026
// Description:
// Sources: N/A

// Indent Sub-statements by 3!!!!
// Wrap Code?
// Capitlize start of comments


// ------------- TESTING -------------
// PASS ALL GIVEN SAMPLE RUN TESTS [yes/no]: Yes
// (Optional) Additional tests count: 4

// ------------- CODE -------------
#include <iostream>
#include <string>
#include <limits> // NOT <climits> for cin.ignore(numeric_limits<streamsize>::max(), '\n');
#include <iomanip>

// RUN AND TEST COMMAND
// cd _midterm // Or the directory containing these files
// g++ main.cpp && for t in *.txt; do ./a.out < $t; done; rm ./a.out 

// MINIMAL COMPILE AND RUN, one line each
// COMPILE
// g++ main.cpp

// RUN
// ./a.out

// REMOVE ./a.out
// rm ./a.out

using namespace std;

//constants declared
const int NUM_PLAYERS = 3;

int main() {

  //Define variables
  string p1Name = "";
  string p2Name = "";
  string p3Name = "";

  int p1Count = 0;
  int p2Count = 0;
  int p3Count = 0;

  cout << "Welcome to the Rock Collector Championships!" << endl;
  
  //User input
  cout << "\nEnter player 1 name: ";
  getline(cin, p1Name);
  cout << "How many rocks did " << p1Name << " collect? ";
  cin >> p1Count;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');
  if (p1Count < 0) {
    cout << "Invalid amount. 0 will be entered." << endl;
    p1Count = 0;
  }

  cout << "\nEnter player 2 name: ";
  getline(cin, p2Name);
  cout << "How many rocks did " << p2Name << " collect? ";
  cin >> p2Count;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');
  if (p2Count < 0) {
    cout << "Invalid amount. 0 will be entered." << endl;
    p2Count = 0;
  }

  cout << "\nEnter player 3 name: ";
  getline(cin, p3Name);
  cout << "How many rocks did " << p3Name << " collect? ";
  cin >> p3Count;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');
  if (p3Count < 0) {
    cout << "Invalid amount. 0 will be entered." << endl;
    p3Count = 0;
  }

  // DEBUG
  // cout << endl;
  // cout << "NAME" <<  '\t' << "COUNT" << endl;
  // cout << p1Name << '\t' << p1Count << endl;
  // cout << p2Name << '\t' << p2Count << endl;
  // cout << p3Name << '\t' << p3Count << endl;

  // Determine places
  int a = p1Count;
  int b = p2Count;
  int c = p3Count;

  // 3 way tie
  if ((a == b) && (b == c)) {
    cout << "\nIt is a three way tie!" << endl;
  }

  // 2 way tie for first place
  else if ((a == b) && (a > c)) {
    cout << "\n" << p1Name << " and " << p2Name << " are tied for first place." << endl;
    cout << p3Name << " is in second place!" << endl;
  }

  else if ((a == c) && (a > b)) {
    cout << "\n" << p1Name << " and " << p3Name << " are tied for first place." << endl;
    cout << p2Name << " is in second place!" << endl;
  }

  else if ((b == c) && (b > a)) {
    cout << "\n" << p2Name << " and " << p3Name << " are tied for first place." << endl;
    cout << p1Name << " is in second place!" << endl;
  }

  // 2 way tie for second place
  else if ((a > b) && (b == c)) {
    cout << "\n" << p1Name << " is in first place!" << endl;
    cout << p2Name << " and " << p3Name << " are tied for second place." << endl;
  }

  else if ((b > a) && (a == c)) {
    cout << "\n" << p2Name << " is in first place!" << endl;
    cout << p1Name << " and " << p3Name << " are tied for second place." << endl;
  }

  else if ((c > a) && (a == b)) {
    cout << "\n" << p3Name << " is in first place!" << endl;
    cout << p1Name << " and " << p2Name << " are tied for second place." << endl;
  }

  //1st place, 2nd place, 3rd place
  else if ((a > b) && (b > c)) {
    cout << "\n" << p1Name << " is in first place!" << endl;
    cout << p2Name << " is in second place." << endl;
    cout << p3Name << " is in third place." << endl;
  }

  else if ((a > c) && (c > b)) {
    cout << "\n" << p1Name << " is in first place!" << endl;
    cout << p3Name << " is in second place." << endl;
    cout << p2Name << " is in third place." << endl;
  }

  else if ((b > a) && (a > c)) {
    cout << "\n" << p2Name << " is in first place!" << endl;
    cout << p1Name << " is in second place." << endl;
    cout << p3Name << " is in third place." << endl;
  }

  else if ((b > c) && (c > a)) {
    cout << "\n" << p2Name << " is in first place!" << endl;
    cout << p3Name << " is in second place." << endl;
    cout << p1Name << " is in third place." << endl;
  }

  else if ((c > a) && (a > b)) {
    cout << "\n" << p3Name << " is in first place!" << endl;
    cout << p1Name << " is in second place." << endl;
    cout << p2Name << " is in third place." << endl;
  }

  else if ((c > b) && (b > a)) {
    cout << "\n" << p3Name << " is in first place!" << endl;
    cout << p2Name << " is in second place." << endl;
    cout << p1Name << " is in third place." << endl;
  }

  //Calculations
  float average = static_cast<double>(p1Count + p2Count + p3Count) / NUM_PLAYERS;

  cout << "\nThe average number of rocks collected by the top three players is ";
  cout << fixed << setprecision(2) << showpoint << average << " rocks!" << endl;

  cout << "\nCongratulations Rock Collectors!" << endl;

  return 0;
}
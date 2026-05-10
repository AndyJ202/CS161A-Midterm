// ------------- FILE HEADER -------------
// Author:
// Assignment:
// Date:
// Description:
// Sources:

// ------------- ZYBOOKS SCORES -------------
// https://learn.zybooks.com/zybook/PCCCS161ASummer25
// Chapter: NONE MIDTERM WEEK


// ------------- DESIGN DOCUMENT -------------
// A. INPUT [yes/no]:
// B. OUTPUT [yes/no]:
// C. CALCULATIONS [yes/no]:
// D. LOGIC and ALGORITHMS [yes/no]:
//    (Optional) flow chart link or file name:

// ------------- TESTING -------------
// PASS ALL GIVEN SAMPLE RUN TESTS [yes/no]:
// (Optional) Additional tests count:

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

int main() {
  string p1_name = "";
  string p2_name = "";
  string p3_name = "";

  int p1_count = 0;
  int p2_count = 0;
  int p3_count = 0;

  cout << "Welcome to the Rock Collector Championships!" << endl;
  
  cout << "Enter player 1 name: ";
  getline(cin, p1_name);
  cout << "How many rocks did " << p1_name << " collect? ";
  cin >> p1_count;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  cout << "Enter player 2 name: ";
  getline(cin, p2_name);
  cout << "How many rocks did " << p2_name << " collect? ";
  cin >> p2_count;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  cout << "Enter player 3 name: ";
  getline(cin, p3_name);
  cout << "How many rocks did " << p3_name << " collect? ";
  cin >> p3_count;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  // DEBUG
  // cout << endl;
  // cout << "NAME" <<  '\t' << "COUNT" << endl;
  // cout << p1_name << '\t' << p1_count << endl;
  // cout << p2_name << '\t' << p2_count << endl;
  // cout << p3_name << '\t' << p3_count << endl;

  //Calculations

  float average = (p1_count + p2_count + p3_count) / 3.0;

  cout << fixed << setprecision(2);

  int a = p1_count;
  int b = p2_count;
  int c = p3_count;

  string first_name = "";
  string second_name = "";
  string third_name = "";

  // Determine places
  cout << "Congratulations Rock Collectors!" << endl;

  return 0;
}

// ------------- DESIGN -------------
/*
Program Name:

Program Description:

Design:
A. INPUT
Define the input variables including name data type.

B. OUTPUT
Define the output variables including data types.

C. CALCULATIONS
Describe calculations used by algorithms in step D.
List all formulas.
If there are no calculations needed, state there are no calculations.

D. LOGIC and ALGORITHMS
Design the logic of your program using pseudocode or flowcharts.
Use conditionals, loops, functions or array constructs.
List the steps in transforming inputs into outputs.
https://github.com/Glen-Sasek-PCC-Instructor/2025-06-22/blob/main/Pseudocode-Reference.txt


SAMPLE RUNS
Welcome to the Rock Collector Championships!

Enter player 1 name: Gordan Freeman
How many rocks did Gordan Freeman collect? -9
Invalid amount. 0 will be entered.

Enter player 2 name: Link
How many rocks did Link collect? 45

Enter player 3 name: D. Va
How many rocks did D. Va collect? 45

Link and D. Va are tied for first place.
Gordan Freeman is in second place!

The average number of rocks collected by the top three players is 30.00 rocks!

Congratulations Rock Collectors!




Welcome to the Rock Collector Championships!

Enter player 1 name: Mario
How many rocks did Mario collect? 56

Enter player 2 name: Master Chief
How many rocks did Master Chief collect? 56

Enter player 3 name: Sonic
How many rocks did Sonic collect? 56

It is a three way tie!

The average number of rocks collected by the top three players is 56.00 rocks!

Congratulations Rock Collectors!




Welcome to the Rock Collector Championships!

Enter player 1 name: King Dedede
How many rocks did King Dedede collect? 57

Enter player 2 name: Samus
How many rocks did Samus collect? 102

Enter player 3 name: Kirby
How many rocks did Kirby collect? 62

Samus is in first place!
Kirby is in second place.
King Dedede is in third place.

The average number of rocks collected by the top three players is 73.67 rocks!

Congratulations Rock Collectors!

*/

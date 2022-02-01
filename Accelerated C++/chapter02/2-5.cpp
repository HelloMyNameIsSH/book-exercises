#include <iostream>
#include <string>

using std::cout; using std::cin;
using std::endl; using std::string;

// Accelerated C++ 
// book-exercises Chapter 2-5
// Write by SH, redlegend@163.com

int main() {

  cout << "Please input rows:";
  int rows;
  cin >> rows;
  
  cout << "Please input cols:";
  int cols;
  cin >> cols;

  // triangle  *
  for (int i = 0; i < rows; i++) {
    string t = string(i * 2 + 1 , '*');
    string space = string(rows - i - 1, ' ');
    cout << space << t << endl;
  }  
  cout << endl;

  // square  *
  for (int i = 0; i < rows; i++) {
    string t = string(rows, '*');
    cout << t << endl;
  }
  cout << endl;

  // rectangle  *
  for (int i = 0; i < rows; i++) {
    string t = string(cols, '*');
    cout << t << endl;
  }

  return 0;
}

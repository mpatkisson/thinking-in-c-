//: C02:Scopy.cpp
//  Copy one file to another a line at a time.

#include <string>
#include <fstream>

using namespace std;

int main() {
  ifstream in("Scopy.cpp");     // Open for reading
  ofstream out("Scopy2.cpp");   // Open for writing
  string s;
  while(getline(in, s)) {       // Strips the newline character
    out << s << "\n";           // Adds it back
  }
} ///:~

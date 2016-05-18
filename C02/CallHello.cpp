//: C02:CallHello.cpp
//  Call another program using C Standard Library function
//  In order to use this, you should compile the Hello.cpp
//  file in this directory
//
//  > g++ Hello.cpp -o Hello

#include <cstdlib>

using namespace std;

int main() {
  system("./Hello");
} ///:~

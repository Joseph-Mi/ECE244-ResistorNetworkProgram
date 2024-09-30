//
//  Resistor.cpp
//  Lab 3 The Resistor Network Program
// Author:
// Date:

#include "Resistor.h"

#include <iomanip>

void Resistor::print() {
  cout << std::left << std::setw(20) << name << std::right << std::setw(8)
       << std::fixed << std::setprecision(2) << resistance << " Ohms "
       << endpointNodeIDs[0] << " -> " << endpointNodeIDs[1] << endl;
}

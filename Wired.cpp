#pragma once  
#include <iostream>
using namespace std;

#include "Wired.h"

Wired::Wired(int volume) : _volume(volume)
{
}

void Wired::ShowSpec() 
{
  cout << "volume is: " << _volume << endl;
}
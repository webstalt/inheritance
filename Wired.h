#pragma once  
#include <iostream>
using namespace std;

#include "IElectronics.h"

class Wired : virtual public IElectronics
{
public:
  Wired(int volume);
  void ShowSpec() override;

protected:
  int _volume;
};

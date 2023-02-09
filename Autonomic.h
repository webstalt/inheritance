#pragma once  
#include <iostream>
using namespace std;

#include "IElectronics.h"

class Autonomic : virtual public IElectronics
{
public:
  Autonomic(int workTime);

  void ShowSpec() override;  

protected:
  int _workTime;
};

#pragma once  
#include <iostream>
using namespace std;

#include "Wired.h"
#include "Autonomic.h"

class Earphones final : public Wired, Autonomic
{
public:
  Earphones(int volume, int workTime);

  void ShowSpec() override;
};

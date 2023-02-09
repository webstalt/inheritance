#pragma once  
#include <iostream>
using namespace std;

#include "Earphones.h"
#include "Wired.h"
#include "Autonomic.h"

Earphones::Earphones(int volume, int workTime): Wired(volume), Autonomic(workTime)
{
}

void Earphones::ShowSpec()
{
  cout << "volume is (W): " << _volume << " and can work autonomously for: " << _workTime << endl;
};

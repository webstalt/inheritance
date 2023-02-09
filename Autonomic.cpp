#pragma once  
#include <iostream>
using namespace std;

#include "Autonomic.h"

Autonomic::Autonomic(int workTime) : _workTime(workTime)
{
}

void Autonomic::ShowSpec() 
{
  cout << "work time is: " << _workTime << endl;
}
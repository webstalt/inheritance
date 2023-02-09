#pragma once 

#include "Wired.h"

class HairDryer final : public Wired // от final нельзя будет наследоваться
{
public:
  HairDryer(int volume);

private:
  int _volume; 
};

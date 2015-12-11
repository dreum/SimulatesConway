#ifndef OUTPUTWORLDINTERFACE_H
#define OUTPUTWORLDINTERFACE_H

#include "World.h"

class OutputWorldInterface
{
public:
   virtual void Output(const World&) = 0;
};

#endif // OUTPUTWORLDINTERFACE_H

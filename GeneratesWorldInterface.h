#ifndef GENERATESWORLDINTERFACE
#define GENERATESWORLDINTERFACE

#include "World.h"

class GeneratesWorldInterface
{
public:
    virtual const World Generate() const = 0;
};

#endif // GENERATESWORLDINTERFACE


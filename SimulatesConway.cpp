#include "SimulatesConway.h"
#include "GeneratesWorldInterface.h"

SimulatesConway::SimulatesConway(const GeneratesWorldInterface &worldGenerator)
    : WorldGenerator(worldGenerator)
{

}

void SimulatesConway::Simulate()
{
    WorldGenerator.Generate();
}


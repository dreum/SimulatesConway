#include "SimulatesConway.h"
#include "GeneratesWorldInterface.h"
#include "OutputWorldInterface.h"

SimulatesConway::SimulatesConway(const GeneratesWorldInterface& worldGenerator, OutputWorldInterface& worldOutputer)
   : WorldGenerator(worldGenerator)
   , WorldOutputer(worldOutputer)
{

}

void SimulatesConway::Simulate()
{
   World seedWorld = WorldGenerator.Generate();

   WorldOutputer.Output(seedWorld);
}


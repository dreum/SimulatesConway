#ifndef SIMULATESCONWAY_H
#define SIMULATESCONWAY_H

class GeneratesWorldInterface;
class OutputWorldInterface;
class SimulatesConway
{
public:
   SimulatesConway(const GeneratesWorldInterface& worldGenerator, OutputWorldInterface& worldOutputer);

   void Simulate();
private:
   SimulatesConway(const SimulatesConway&);
   const SimulatesConway& operator=(const SimulatesConway&);

   const GeneratesWorldInterface& WorldGenerator;
   OutputWorldInterface& WorldOutputer;
};

#endif // SIMULATESCONWAY_H
